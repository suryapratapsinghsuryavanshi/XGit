![XGit](./assets/xgit-logo.svg)
> A Simple git client, provides flexibility to committers.

<b>Technologies:</b> C++, Shell Script, CMake

## What is the need of XGit
- The Git only have CLI, command directive mode.
- The Git is not easy to use for beginners.
- The Git is not easy to use for non-technical people, becouse it use technical terms.
- The XGit solve all the above problem with the terminal interactive interface.

## References
<b>1. Video</b>: [What is git(English)](https://www.youtube.com/watch?v=2sjqTHE0zok&t=716s)<br>
<b>2. Video</b>: [What is git(Hindi)](https://www.youtube.com/watch?v=QhqVRuRBA9w)<br>
<b>3. Video</b>: [What is git and GitHub](https://www.youtube.com/watch?v=ZoOdwgxmw4U)<br>
<b>4. Article</b>: [What are git and GitHub](http://ryanheathcote.com/git/build-your-own-vcs)<br>
<b>5. GitHub</b>: [GitHub Repository](https://github.com/anurag97/Mygit)<br>

## Compile & Run

How to manage files and directories.
```sh
.
├── LICENSE  # License file.
├── README.md # Documentation file.
├── assets # Contain all assests files.
│   └── ___.__
├── main.cpp # Main source code file.
├── CMakeLists.txt # Contain all cmake related code.
├── src
│   ├── headers # Contain all headers related to the codebase.
│   │   └── ______.h
│   └── lib # Contains all libs related to the codebase.
│       └── ______.lib
└── build # Output folder contain all binary files for final software.
```

### For compile with CMake:
```sh
cmake -G "MinGW Makefiles" -S . -B ./build
```

For build with CMake:
```sh
cmake --build .\build\
```

For run:
```sh
.\build\xgit
```

### For compile with bash:
```sh
./setup.sh
```

### Install the XGit to your system:
- For Windows:
    ```sh
    mv ./build/xgit.exe c:/windows/system32
    ```
- For Linux:
    ```sh
    sudo mv ./build/xgit /usr/bin
    ```

## Code Style
| Code Implementation | Code Style |
| -- | -- |
| Class & Packages | PascalCase |
| Namespace | lower_snake_case |
| Constant | CONSTANT_CASE |
| Function | camelCase |

For more: [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html), [Google Shell Script Style Guide](https://google.github.io/styleguide/shellguide.html)

## Comments
Comments should be self, described and for every piece of code that can do a task for a specific reason, there must be a elevrative comments. Comments documenting declarations should be full sentences, even if that seems a little redundant. This approach makes them format well when extracted into good documentation. Comments should begin with the name of the thing being described and end in a period.
