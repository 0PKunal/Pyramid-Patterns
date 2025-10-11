<div align="center">

## Pyramid and Triangle Patterns (C and Python)
[![Python Version](https://img.shields.io/badge/python-3.8%2B-blue.svg)](https://www.python.org/downloads/)
[![C](https://img.shields.io/badge/C-Programming-blue.svg)](https://gcc.gnu.org/install/binaries.html)
[![GCC](https://img.shields.io/badge/GCC-Compiler-brightgreen.svg)](https://gcc.gnu.org/install/binaries.html)
[![VS Code](https://img.shields.io/badge/VS%20Code-Editor-blue.svg)](https://code.visualstudio.com/download)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![GitHub stars](https://img.shields.io/github/stars/0PKunal/3d-Volume-Calculation?style=social)](https://github.com/0PKunal/Pyramid-Patterns/stargazers)

</div>

## Table of Contents
- [Pyramid and Triangle Patterns (C and Python)](#pyramid-and-triangle-patterns-c-and-python)
- [Table of Contents](#table-of-contents)
- [Description](#description)
- [Features](#features)
- [Project layout](#project-layout)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
  - [Python](#python)
  - [C](#c)
- [Examples](#examples)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)


## Description

A tiny, colorful collection of classic pyramid/triangle patterns implemented in both C and Python. Great for practicing loops, spacing, and basic CLI usage. Small, focused exercises to print classic ASCII pyramids and triangles. Each pattern is implemented in both C and Python with simple CLI usage so you can compare languages side-by-side.

## Features
- Both C and Python implementations of common pyramid/triangle patterns
- Simple CLI usage with optional row count argument
- Windows-friendly VS Code tasks for building/running C programs
- Clean, beginner-friendly code focused on loops and spacing


**Patterns included**
- Half pyramid (stars)
- Full pyramid (centered stars)
- Inverted half pyramid
- Number pyramid
- Floyd's triangle
- Pascal's triangle
- Diamond pattern

## Project layout

```
README.md
c/
  diamond_pattern.c
  floyd_triangle.c
  full_pyramid.c
  half_pyramid.c
  inverted_pyramid.c
  number_pyramid.c
  pascal_triangle.c
  exe/
      diamond_pattern.exe
      floyd_triangle.exe
      full_pyramid.exe
      half_pyramid.exe
      inverted_pyramid.exe
      number_pyramid.exe
      pascal_triangle.exe
py/
  __init__.py
  diamond_pattern.py
  floyd_triangle.py
  full_pyramid.py
  half_pyramid.py
  inverted_pyramid.py
  number_pyramid.py
  pascal_triangle.py
  runner.py
```

## Requirements

- Python 3.8+ (Windows/macOS/Linux)
- GCC for C examples (on Windows, install MinGW-w64 and add `gcc` to PATH)
- Optional: VS Code (this repo ships with handy build/run tasks for C)

## Installation

No special install is required:
- Ensure Python and (optionally) GCC are installed and available on your PATH.
1. Clone the repository:
```bash
    git clone https://github.com/0PKunal/Pyramid-Patterns.git
```
2. Then change the directory:
```bash
    cd Pyramid-Patterns
```

- Optionally open the folder in VS Code to use the included tasks.

## Usage

### Python

- Run all patterns (default 5 rows):

```powershell
python -m py.runner
```

- Run all patterns with N rows:

```powershell
python -m py.runner 8
```

- Run a single pattern (examples):

```powershell
python -m py.half_pyramid 6
python -m py.full_pyramid 5
python -m py.diamond_pattern 7
```

You can also run a script directly if you prefer:

```powershell
python .\py\half_pyramid.py 6
```

### C

Most C programs accept an optional first CLI argument for the number of rows. If you omit it, they prompt for input interactively.

- Manual compile and run from the `c` folder:

```powershell
gcc .\c\half_pyramid.c -o .\c\half_pyramid.exe
.\c\half_pyramid.exe 6
```

Or run without an argument to be prompted:

```powershell
.\c\half_pyramid.exe
```

**VS Code tasks (Windows-friendly)**

This workspace defines two tasks:

- Build C Program — compiles the currently active C file with GCC
- Run C Program — runs the compiled `.exe` in a new Command Prompt window

How to use:

1) Open a `c/*.c` file in the editor (e.g., `c/half_pyramid.c`).
2) Press Ctrl+Shift+P and run “Tasks: Run Task”.
3) Choose “Build C Program” to compile, then “Run C Program” to execute.

Tip: If the program prompts for rows, type a number and press Enter. To pass a number as an argument, run the compiled `.exe` from a terminal as shown above.

## Examples

Half pyramid (n = 5):

```
*
**
***
****
*****
```

Diamond (n = 4):

```
   *
  ***
 *****
*******
 *****
  ***
   *
```


## Troubleshooting

- “gcc is not recognized” on Windows:
  - Install MinGW-w64 (or a GCC toolchain) and add its `bin` folder to your PATH.
- “No module named py” when running Python modules:
  - Ensure your current directory is the repo root when using `python -m py.<module>`.
  - Alternatively, run the script directly: `python .\py\half_pyramid.py 5`.
- Nothing prints or odd spacing:
  - Check your terminal font settings; these patterns use spaces and `*` characters.

## Contributing

Contributions are welcome and appreciated! Here are some ways you can contribute:

***Suggest Enhancements***
- New features or improvements
- Better visualization techniques
- Performance optimizations

***Submit Pull Requests***
- Fork the repository
- Create a feature branch: `git checkout -b feature/your-feature`
- Make your changes with clear, commented code
- Test thoroughly with different functions
- Submit a pull request with a detailed description

***Ideas for Contribution***
- Add more patterns (hollow/full, mirrored, hourglass, binary number pyramids)
- Colorized/emoji output modes behind a flag (Python and C)
- Input validation, helpful error messages, and unit tests for Python
- Optional screenshots/GIFs of terminal output in README
- Interactive menu/runner to pick patterns and sizes
- CI to lint/format Python and validate sample outputs

Please ensure any code contributions maintain the existing style and include appropriate documentation.


## License

This project is open source and available under the [MIT License](LICENSE).

**MIT License** - Copyright (c) 2025 0PKunal

*Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions outlined in the [LICENSE](LICENSE) file.*

---
> **Note:** This README.md file was generated with the assistance of AI. While every effort has been made to ensure accuracy and clarity, there may still be minor errors or inconsistencies. Users are encouraged to review the content carefully and make any necessary adjustments.
---

<div align="center">
  <p>Made with ❤️ by <a href="https://github.com/0PKunal">0PKunal</a></p>
  <p>If this project helped you, please give it a ⭐️</p>
</div>
