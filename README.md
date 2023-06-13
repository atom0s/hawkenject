<div align="center">
    <img width="200" src="https://github.com/atom0s/hawkenject/raw/main/repo/hawkenject.png" alt="hawkenject">
    </br>
</div>

<div align="center">
    <a href="https://discord.gg/UmXNvjq"><img src="https://img.shields.io/discord/704822642846466096.svg?style=for-the-badge" alt="Discord server" /></a>
    <a href="LICENSE"><img src="https://img.shields.io/badge/License-AGPL_v3-blue?style=for-the-badge" alt="license" /></a>
    <br/>
    <br/>
    <strong>Wish to donate or sponsor my work?</strong>
    <br/>
    <a href="https://github.com/sponsors/atom0s/"><img src="https://img.shields.io/github/sponsors/atom0s?style=for-the-badge" alt="sponsors" /></a>
    <a href="https://paypal.me/atom0s"><img src="https://img.shields.io/badge/donate-PayPal-blue?style=for-the-badge" alt="paypal" /></a>
    <a href="https://patreon.com/atom0s"><img src="https://img.shields.io/badge/sponsor-Patreon-blue?style=for-the-badge" alt="paypal" /></a>
</div>

# hawkenject

hawkenject is an injected hook for the [defunct] Unreal Engine 3 game, Hawken. The goal of this project is to reimplement the stripped dedicated server features and functionality that is missing in the latest available retail client.

Hawken was originally showcased at PAX EAST 2012 which included a playable demo of the game. This client (built in late 2011) included UE3 dedicated server functionality. However, later releases of the actual retail client have parts of that dedicated server functionality removed from the executable. This project aims to restore the stripped features and functionality.

Currently, this project is intended for use with the client version: `1.5.3.142579`

# Credits

hawkenject is coded in C++ by **atom0s**

The following tools are used to make hawkenject:

  - **Visual Studio Code (Insiders)** https://code.visualstudio.com/insiders/
    - Extension: **C/C++**
    - Extension: **CMake**
    - Extension: **CMake Tools**
  - **CMake** https://cmake.org/

The following third-party libraries are used to make hawkenject:

  - **Microsoft Detours** https://github.com/microsoft/Detours
  - **UnrealEngineSDKGenerator** https://github.com/polivilas/UnrealEngineSDKGenerator

Credits to the following for additional resources:

  - **Paul J. - Flaticon** - Icon image used for the project.

# Building / Compiling

This repository contains everything needed in order to compile hawkenject. All third-party dependencies and such are already present in the repository to help reduce any kind of headache of tracking down proper copies of any needed files. Using the proper tooling should allow you to immediately compile and use hawkenject with minimal effort.

hawkenject is coded in C++ making use of newer C++14/17/20 standards features. Because of this, you will need a modern C++ compiler in order to build this project. It is recommended that you use CMake with the Visual Studio C++ build tools from Microsoft. _(VC++ 2022 Build Tools are recommended at this time.)_

The following tools are the preferred and recommended method of working on and building hawkenject:

  - **Visual Studio Code (Insiders)** https://code.visualstudio.com/insiders/
    - Extension: **C/C++**
    - Extension: **CMake**
    - Extension: **CMake Tools**
  - **CMake** https://cmake.org/


## License

hawkenject is licensed under [GNU AGPL v3](https://github.com/atom0s/hawkenject/blob/main/LICENSE)

Please be sure you understand the license before making use of **hawkenject**. This is `AGPL`, **not** standard `GPL`.

## Legal

hawkenject is developed solely for educational purposes, with the intent of research into data storage, compression, and MMORPG technologies.

We (contributors) do not claim ownership of any copyright content related to, or associated with, `Hawken`.

```
© 2016 Hawken Entertainment, Inc. All rights reserved. HAWKEN and all associated logos and designs are trademarks or registered
trademarks of Hawken Entertainment, Inc. Published by 505 Games. 505 Games and the 505 Games logo are registered trademarks of
505 Games S.p.A and/ or its affiliates. All other trademarks are the property of their respective owners. All rights reserved.
```

Please note; the reverse engineering done by this repository and its contributors is entirely 'clean room'. We **DO NOT** have or use any leaked source code or other unpublished material. By contributing to this repository, you agree to the following:

  - You are not employeed by Hawken Entertainment, any partner/subsidiary, or have been previously, in any capacity.
  - You do not and have never had any leaked material related to `Hawken` in any manner.
  - You do not and have never referenced any leaked or otherwise unreleased material related to `Hawken` in any manner.

We **DO NOT** claim ownership of any material or information gathered through the means of reverse engineering the client and its files for this purpose.
