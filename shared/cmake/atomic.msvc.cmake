####################################################################################################
#
# Atomic CMake Settings Helper
# Copyright (c) 2023 atom0s [atom0s@live.com]
#
# Contact: https://www.atom0s.com/
# Contact: https://discord.gg/UmXNvjq
# Contact: https://github.com/atom0s
# Support: https://paypal.me/atom0s
# Support: https://patreon.com/atom0s
# Support: https://github.com/sponsors/atom0s
#
####################################################################################################
# Please note; this file is designed for use on Windows machines making use of the
# Microsoft Visual Studio environment/build tools.
####################################################################################################

include_guard()

# Set general CMake settings..
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_FIND_USE_SYSTEM_ENVIRONMENT_PATH OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Override the default CMake C++ settings..
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "")
set(CMAKE_CXX_FLAGS_MINSIZEREL "")
set(CMAKE_CXX_FLAGS_RELEASE "")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "")

# Set the C++ standard if its not already set..
if ("${CMAKE_CXX_STANDARD}" STREQUAL "")
    set(CMAKE_CXX_STANDARD 23)
endif()

# Setup parallel building..
if (NOT CMAKE_BUILD_PARALLEL_LEVEL)
    include(ProcessorCount)
    ProcessorCount(N)

    if (NOT N EQUAL 0)
        set(CMAKE_BUILD_PARALLEL_LEVEL ${N})
    endif()
endif()

####################################################################################################
#
# Compiler Helper Functions
#
####################################################################################################

# [compiler] Sets the recommended compiler settings for the given project.
function (atomic_compiler_attach proj_name)

    # Set general configuration independent options..
    target_compile_options(${proj_name} PUBLIC
        /analyze-               # Disable code analysis..
        /bigobj                 # Increase number of sections object files can hold..
        /D_MBCS                 # Define: _MBCS
        /DWIN32                 # Define: WIN32
        /D_WINDOWS              # Define: _WINDOWS
        /diagnostics:column     # Enable rich diagnostics..
        /EHa                    # Enable C++ exceptions with SEH..
        /errorReport:prompt     # Sets the internal compile error reporting method..
        /FC                     # Use full paths in diagnostic messages..
        /fp:precise             # Sets the floating point model..
        /Gd                     # Default calling convention (__cdecl)
        /GF                     # Enable string pooling..
        /Gm-                    # Disable minimal rebuild..
        /GS                     # Enable securiy checks..
        /MP                     # Enable multi-processor compiling..
        /nologo                 # Disable tooling logo..
        /Oy-                    # Don't omit frame pointers..
        /permissive-            # Sets the conformance mode..
        /sdl                    # Enable SDL checks..
        /Zc:forScope            # Force comformance in for loop scope..
        /Zc:inline              # Remove unreferenced code..
        /Zc:wchar_t             # Treat wchar_t as built-in type..
        )

    # Set debug configuration options..
    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        target_compile_options(${proj_name} PUBLIC
            /DDEBUG             # Define: DEBUG
            /MDd                # Use debug mode runtime library..
            /Ob0                # Default inline function expansion..
            /Od                 # Disable optimizations..
            /RTC1               # Enable basic runtime checks..
            /Zi                 # Enable program database..
            )
    endif()

    # Set release configuration options..
    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        target_compile_options(${proj_name} PUBLIC
            /DNDEBUG            # Define: NDEBUG
            /GL                 # Enable whole program optimization..
            /Gy-                # Disable function-level linking..
            /MD                 # Use release mode runtime library..
            /Ob2                # Default inline function expansion..
            /Oi                 # Generate intrinsic functions..
            /O2                 # Use maximum optimizations..
            )
    endif()

endfunction()

# [compiler] Sets the compiler warning level for the given project.
function (atomic_compiler_set_warn_level proj_name level)
    if (level STREQUAL "")
        set(level 3)
    endif()
    target_compile_options(${proj_name} PUBLIC "/W${level}")
endfunction()

# [compiler] Sets the compiler to treat warnings as errors for the given project.
function (atomic_compiler_treat_warnings_as_errors proj_name)
    target_compile_options(${proj_name} PUBLIC "/WX")
endfunction()

####################################################################################################
#
# Linker Helper Functions
#
####################################################################################################

# [linker] Sets the recommended linker settings for the given project.
function (atomic_linker_attach proj_name)

    # Set general configuration independent options..
    target_link_options(${proj_name} PUBLIC
        /ERRORREPORT:PROMPT     # Sets the internal linker error reporting method..
        /MACHINE:X86            # Sets the target platform..
        /NODEFAULTLIB:libci     # Remove default library 'libci' to avoid Direct3D library issues..
        /NOLOGO                 # Suppress the startup banner..
        /NXCOMPAT               # Marks the DLL as DEP compatible..
        /TLBID:1                # Sets the default type library id..
        )

    # Set debug configuration options..
    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        target_link_options(${proj_name} PUBLIC
            /INCREMENTAL        # Enable incremental building..
            )
    endif()

    # Set release configuration options..
    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        target_link_options(${proj_name} PUBLIC
            /INCREMENTAL:NO     # Disable incremental building..
            /LTCG:incremental   # Sets the linker to optimize only changed files..
            /NOCOFFGRPINFO      # Removes the debug directory from the resulting binary..
            /OPT:ICF            # Enables COMDAT folding..
            /OPT:REF            # Removes unused code from the resulting binary..
            )
    endif()

endfunction()

# [linker] Enables generating debug information for the given project.
function (atomic_linker_enable_debug_linking proj_name)
    target_link_options(${proj_name} PUBLIC
        /DEBUG                  # Generate debug info..
        )
endfunction()

# [linker] Disables generating debug information for the given project.
function (atomic_linker_disable_debug_linking proj_name)
    target_link_options(${proj_name} PUBLIC
        /DEBUG:NONE             # Don't generate debug info..
        )
endfunction()

# [linker] Enables generating safe exception handlers for the given project.
function (atomic_linker_enable_safe_seh proj_name)
    target_link_options(${proj_name} PUBLIC
        /SAFESEH                # Image has Safe Exception Handlers..
        )
endfunction()

# [linker] Sets the given project to be compiled and linked as a DLL.
function (atomic_linker_set_dll proj_name)
    target_link_options(${proj_name} PUBLIC
        /DLL                    # Build project as DLL..
        /DYNAMICBASE            # Use address space layout randomization..
        )
endfunction()

# [linker] Sets the manifest type of the given project.
function (atomic_linker_set_manifest proj_name manifest_type)
    # Handle no manifest..
    if (manifest_type STREQUAL "" OR manifest_type STREQUAL "no")
        target_link_options(${proj_name} PUBLIC
            /MANIFEST:NO
            /MANIFESTUAC:NO
            )

    # Handle 'invoker'..
    elseif (manifest_type STREQUAL "invoker")
        target_link_options(${proj_name} PUBLIC
            /MANIFEST
            "/MANIFESTUAC:level=\'asInvoker\' uiAccess=\'false\'"
            )

    # Handle 'highest'..
    elseif (manifest_type STREQUAL "highest")
        target_link_options(${proj_name} PUBLIC
            /MANIFEST
            "/MANIFESTUAC:level=\'highestAvailable\' uiAccess=\'false\'"
            )

    # Handle 'admin'..
    elseif (manifest_type STREQUAL "admin")
        target_link_options(${proj_name} PUBLIC
            /MANIFEST
            "/MANIFESTUAC:level=\'requireAdministrator\' uiAccess=\'false\'"
            )
    endif()
endfunction()

# [linker] Sets the sub-system for the given project to be a console application.
function (atomic_linker_set_subsystem_console proj_name)
    target_link_options(${proj_name} PUBLIC "/SUBSYSTEM:CONSOLE")
endfunction()

# [linker] Sets the sub-system for the given project to be a window application.
function (atomic_linker_set_subsystem_windows proj_name)
    target_link_options(${proj_name} PUBLIC "/SUBSYSTEM:WINDOWS")
endfunction()