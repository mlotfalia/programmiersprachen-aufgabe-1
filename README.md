# Programmiersprachen – Assignment 1

**Sommersemester 2025**

![Build Status](https://github.com/mlotfalia/programmiersprachen-aufgabe-1/actions/workflows/ci.yml/badge.svg)

> _A first dive into modern C++: tool-chain, version control, basic syntax, and test-driven development._

---

## 📋 Table of Contents

1. [Overview](#overview)
2. [Repository Structure](#repository-structure)
3. [Prerequisites](#prerequisites)
4. [Building & Running](#building--running)
5. [Implemented Tasks](#implemented-tasks)
6. [References](#references)
7. [License](#license)

---

## Overview

This repository contains my solutions to **Assignment 1** of the _Programmiersprachen_ course for Summer 2025. The goal is to explore modern C++ development by covering:

- **Git workflow & CMake configuration** (Tasks 1.1, 1.2)
- **Control structures & numerical problems** (Tasks 1.3–1.5)
- **Randomness, I/O, and enums** (Task 1.6)
- **Personal C++ glossary** (Task 1.7)
- **Test-driven development with Catch2** (Tasks 1.8–1.11)

All code is written in **C++20** and follows best practices for readability, maintainability, and testing.

---

## Repository Structure

```
├── CMakeLists.txt            # Top-level CMake build script
├── external/                 # External dependencies
│   └── catch2/               # Catch2 single-header framework
│       ├── catch.hpp
│       └── CATCH2_LICENSE.txt
├── source/                   # Production source code
│   ├── CMakeLists.txt        # Source-level CMake configuration
│   ├── helloworld.cpp        # Hello World example
│   ├── math.cpp              # Mathematical functions
│   ├── math.hpp
│   ├── gcd.cpp               # Greatest common divisor
│   ├── gcd.hpp
│   └── flip_coin.cpp         # Random coin flip simulation
├── tests/                    # Unit tests (Catch2)
│   ├── CMakeLists.txt        # Tests-level CMake configuration
│   ├── test_main.cpp         # Test runner setup
│   ├── tests_math.cpp        # Tests for math module
│   └── tests_gcd.cpp         # Tests for gcd module
└── build/                    # Build artifacts (gitignored)
```

---

## Prerequisites

- **C++20** compiler (GCC 10+, Clang 11+, MSVC 2019+)
- **CMake 3.15+**
- **Git**

> **Optional:** `vcpkg` on Windows for dependency management.

---

## Building & Running

**1. Clone the repository**

```bash
git clone https://github.com/mlotfalia/programmiersprachen-aufgabe-1.git
cd programmiersprachen-aufgabe-1
```

**2. Configure & build**

```bash
# Create a build directory
mkdir build && cd build

# On Linux/macOS
cmake -DCMAKE_BUILD_TYPE=Release ..

# On Windows (using vcpkg)
cmake -DCMAKE_TOOLCHAIN_FILE=../external/vcpkg/scripts/buildsystems/vcpkg.cmake \
      -DCMAKE_BUILD_TYPE=Release ..

# Build
cmake --build .
```

**3. Run the tests**

```bash
ctest --output-on-failure
```

**4. Execute examples**

```bash
# For example:
./helloworld
```

---

## Implemented Tasks (1.1 – 1.11)

| Task | Description                                     | Status  |
| ---- | ----------------------------------------------- | ------- |
| 1.1  | Initialize Git repository & create `.gitignore` | ✅ Done |
| 1.2  | Configure CMake for multi-target build          | ✅ Done |
| 1.3  | Solve numerical problem A                       | ✅ Done |
| 1.4  | Solve numerical problem B                       | ✅ Done |
| 1.5  | Implement control flow exercise                 | ✅ Done |
| 1.6  | Randomness, I/O, enums                          | ✅ Done |
| 1.7  | Personal C++ glossary (README section)          | ✅ Done |
| 1.8  | Write unit tests for math module                | ✅ Done |
| 1.9  | Write unit tests for GCD module                 | ✅ Done |
| 1.10 | Integrate Catch2 into CI pipeline               | ✅ Done |
| 1.11 | Ensure test coverage & documentation            | ✅ Done |

---

## References

- [CMake Documentation](https://cmake.org/documentation/)
- [Catch2 User Guide](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md)
- _The C++ Programming Language_ by Bjarne Stroustrup

---

## License

This project is licensed under the [MIT License](LICENSE).
