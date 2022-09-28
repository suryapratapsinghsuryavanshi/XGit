#!/bin/bash

# remove old build directory
rm -rf build

# Firstly run the following command to make cmkae cashed files.
if [[ "$OSTYPE" == "linux-gnu" ]]; then
    cmake -S . -B ./build
else
    cmake -G "MinGW Makefiles" -S . -B ./build
fi

# Secondly run the following command to build the project.
cmake --build ./build/ --config Release

# copy the last build file and paste into release folder.
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux
    cp ./build/xgit ./release/xgit
elif [[ "$OSTYPE" == "darwin"* ]]; then
    # Mac OSX
    cp ./build/xgit ./release/xgit
elif [[ "$OSTYPE" == "cygwin" ]]; then
    # POSIX compatibility layer and Linux environment emulation for Windows
    cp ./build/xgit.exe ./release/xgit.exe
elif [[ "$OSTYPE" == "msys" ]]; then
    # Lightweight shell and GNU utilities compiled for Windows (part of MinGW)
    cp ./build/xgit.exe ./release/xgit.exe
elif [[ "$OSTYPE" == "win32" ]]; then
    cp ./build/xgit.exe ./release/xgit.exe
fi

# print success message to console and wait for enter press.
echo -e "\e[32mBuild successfull. Press enter to exit.\e[0m"
read
