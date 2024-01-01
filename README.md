M# Custom C Garbage Collector (CGC)

## Overview

This repository introduces a custom garbage collector for C programs, aimed at enhancing memory management and minimizing memory leaks. The Custom C Garbage Collector (CGC) replaces standard memory allocation and deallocation functions with 'smart' versions that track all allocated memory, thereby ensuring efficient memory cleanup.

## Features

- **Automatic Memory Management**: Automates the process of memory deallocation, reducing the risk of memory leaks.
- **Easy Integration**: Designed to be easily integrated into existing C projects.
- **Memory Allocation Tracking**: Keeps track of all allocated memory blocks for efficient deallocation.

## Installation

To use CGC in your project, include the `cgc.h` header file and ensure the CGC source files are compiled with your project.

```c
#include "cgc.h"
