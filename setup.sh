#!/bin/bash

# Firstly run the following command to make cmkae cashed files.
cmake -G "MinGW Makefiles" -S . -B ./build

# Secondly run the following command to build the project.
cmake --build ./build/ --config Release

# Thirdly run the following command to run the project.
./build/xgit
