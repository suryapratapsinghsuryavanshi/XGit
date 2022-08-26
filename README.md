![XGit](./assets/xgit-logo.svg)
> A Simple git clone, provides flexibility to committers.

<b>Technologies:</b> C++, Shell Script, CMake

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
├── LICENSE  
├── README.md
├── assets
│   └── xgit-logo.svg
├── main.cpp # Main source code file.
├── makefile
├── src
│   ├── headers # Contain all headers related to the codebase.
│   │   └── login.h
│   └── lib # Contains all libs related to the codebase.
│       └── login.lib
└── xgit # Output file or final software.
```

For compile:
```sh
g++ ./main.cpp -o xgit
```

For run:
```sh
./xgit
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
