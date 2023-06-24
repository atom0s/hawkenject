
# Set the minimum required CMake version..
cmake_minimum_required(VERSION 3.22)

# Set the CMake module path..
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/shared/cmake)

####################################################################################################
#
# ATOMIC_PROJECT_NAME_HOOK
# ATOMIC_PROJECT_NAME_INJECTOR
#
# Sets the name of the projects being built. These variables are used for multiple purposes such as
# the overall project names, the output file names and the target names used for the various
# underlying CMake function calls used to configure the projects.
#
####################################################################################################

set(ATOMIC_PROJECT_NAME_HOOK "hook")
set(ATOMIC_PROJECT_NAME_INJECTOR "hawkenject")

####################################################################################################

# Define the projects..
project(${ATOMIC_PROJECT_NAME_HOOK} CXX)
project(${ATOMIC_PROJECT_NAME_INJECTOR} CXX)

# Include the custom CMake module..
include(atomic.msvc)

####################################################################################################
#
# Hook Project Variables
#
####################################################################################################

set(${ATOMIC_PROJECT_NAME_HOOK}_res
    "${CMAKE_SOURCE_DIR}/res/${ATOMIC_PROJECT_NAME_HOOK}.rc"
    )

set(${ATOMIC_PROJECT_NAME_HOOK}_inc_paths
    "ext/detours/"
    "ext/sdk/"
    )

set(${ATOMIC_PROJECT_NAME_HOOK}_lib_paths
    "ext/detours/"
    )

set(${ATOMIC_PROJECT_NAME_HOOK}_lib
    "detours"
    )

set(${ATOMIC_PROJECT_NAME_HOOK}_src
    "src/hook/exports.def"
    "src/hook/main.cpp"
    "src/hook/objects.hpp"
    "src/hook/utils.hpp"

    # Unreal SDK
    "ext/sdk/SDK/Hawken_Basic.cpp"
    )

# Prepare the project..
add_library(${ATOMIC_PROJECT_NAME_HOOK} MODULE ${${ATOMIC_PROJECT_NAME_HOOK}_res} ${${ATOMIC_PROJECT_NAME_HOOK}_src})
target_include_directories(${ATOMIC_PROJECT_NAME_HOOK} PUBLIC ${${ATOMIC_PROJECT_NAME_HOOK}_inc_paths})
target_link_directories(${ATOMIC_PROJECT_NAME_HOOK} PUBLIC ${${ATOMIC_PROJECT_NAME_HOOK}_lib_paths})
target_link_libraries(${ATOMIC_PROJECT_NAME_HOOK} PUBLIC ${${ATOMIC_PROJECT_NAME_HOOK}_lib})

# Set module properties..
set_target_properties(${ATOMIC_PROJECT_NAME_HOOK} PROPERTIES
    CXX_EXTENSIONS ON           # Enable CXX extensions..
    CXX_STANDARD_REQUIRED ON    # Mark the CXX standard option as a requirement..
    LINKER_LANGUAGE CXX         # Sets the linker language to C++..
    )

# Set module output properties..
if (WIN32)
    set_target_properties(${ATOMIC_PROJECT_NAME_HOOK} PROPERTIES
        OUTPUT_NAME ${ATOMIC_PROJECT_NAME_HOOK}
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
        )
endif()

# Setup compiler settings..
atomic_compiler_attach(${ATOMIC_PROJECT_NAME_HOOK})
atomic_compiler_set_warn_level(${ATOMIC_PROJECT_NAME_HOOK} "4")
atomic_compiler_treat_warnings_as_errors(${ATOMIC_PROJECT_NAME_HOOK})

# Setup linker settings..
atomic_linker_attach(${ATOMIC_PROJECT_NAME_HOOK})
atomic_linker_enable_safe_seh(${ATOMIC_PROJECT_NAME_HOOK})
atomic_linker_set_dll(${ATOMIC_PROJECT_NAME_HOOK})
atomic_linker_set_manifest(${ATOMIC_PROJECT_NAME_HOOK} "admin")

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    atomic_linker_enable_debug_linking(${ATOMIC_PROJECT_NAME_HOOK})
else()
    atomic_linker_disable_debug_linking(${ATOMIC_PROJECT_NAME_HOOK})
endif()

####################################################################################################
#
# Injector Project Variables
#
####################################################################################################

set(${ATOMIC_PROJECT_NAME_INJECTOR}_res
    "${CMAKE_SOURCE_DIR}/res/${ATOMIC_PROJECT_NAME_INJECTOR}.rc"
    )

set(${ATOMIC_PROJECT_NAME_INJECTOR}_inc_paths
    )

set(${ATOMIC_PROJECT_NAME_INJECTOR}_lib_paths
    )

set(${ATOMIC_PROJECT_NAME_INJECTOR}_lib
    )

set(${ATOMIC_PROJECT_NAME_INJECTOR}_src
    "src/injector/main.cpp"
    )

# Prepare the project..
add_executable(${ATOMIC_PROJECT_NAME_INJECTOR} ${${ATOMIC_PROJECT_NAME_INJECTOR}_res} ${${ATOMIC_PROJECT_NAME_INJECTOR}_src})
target_include_directories(${ATOMIC_PROJECT_NAME_INJECTOR} PUBLIC ${${ATOMIC_PROJECT_NAME_INJECTOR}_inc_paths})
target_link_directories(${ATOMIC_PROJECT_NAME_INJECTOR} PUBLIC ${${ATOMIC_PROJECT_NAME_INJECTOR}_lib_paths})
target_link_libraries(${ATOMIC_PROJECT_NAME_INJECTOR} PUBLIC ${${ATOMIC_PROJECT_NAME_INJECTOR}_lib})

# Set module properties..
set_target_properties(${ATOMIC_PROJECT_NAME_INJECTOR} PROPERTIES
    CXX_EXTENSIONS ON           # Enable CXX extensions..
    CXX_STANDARD_REQUIRED ON    # Mark the CXX standard option as a requirement..
    LINKER_LANGUAGE CXX         # Sets the linker language to C++..
    )

# Set module output properties..
if (WIN32)
    set_target_properties(${ATOMIC_PROJECT_NAME_INJECTOR} PROPERTIES
        OUTPUT_NAME ${ATOMIC_PROJECT_NAME_INJECTOR}
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
        )
endif()

# Setup compiler settings..
atomic_compiler_attach(${ATOMIC_PROJECT_NAME_INJECTOR})
atomic_compiler_set_warn_level(${ATOMIC_PROJECT_NAME_INJECTOR} "4")
atomic_compiler_treat_warnings_as_errors(${ATOMIC_PROJECT_NAME_INJECTOR})

# Setup linker settings..
atomic_linker_attach(${ATOMIC_PROJECT_NAME_INJECTOR})
atomic_linker_enable_safe_seh(${ATOMIC_PROJECT_NAME_INJECTOR})
atomic_linker_set_manifest(${ATOMIC_PROJECT_NAME_INJECTOR} "admin")
atomic_linker_set_subsystem_console(${ATOMIC_PROJECT_NAME_INJECTOR})

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    atomic_linker_enable_debug_linking(${ATOMIC_PROJECT_NAME_INJECTOR})
else()
    atomic_linker_disable_debug_linking(${ATOMIC_PROJECT_NAME_INJECTOR})
endif()