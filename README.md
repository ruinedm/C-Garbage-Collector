M# Custom C Garbage Collector (CGC)

## Overview

This repository introduces a custom garbage collector for C programs, aimed at enhancing memory management and minimizing memory leaks, it's far from being optimized, and does not support multi-threading, but i will be updating this as i learn more stuff :D.
 The Custom C Garbage Collector (CGC) replaces standard memory allocation and deallocation functions with 'smart' versions that track all allocated memory, thereby ensuring efficient memory cleanup.

## Features

- **Automatic Memory Management**: Automates the process of memory deallocation, reducing the risk of memory leaks.
- **Easy Integration**: Designed to be easily integrated into existing C projects.
- **Memory Allocation Tracking**: Keeps track of all allocated memory blocks for efficient deallocation.

## Installation

To use CGC in your project, include the `cgc.h` header file and ensure the CGC source files are compiled with your project.

```c
#include "cgc.h"
```
Usage
-----

### Memory Allocation: `smart_malloc`
```c
void *smart_malloc(size_t size);
```
Replaces the standard `malloc` function.
*   `size`: Number of bytes to allocate.
*   Returns a pointer to the allocated memory or `NULL` if allocation fails.

### Automatic Memory Cleanup: `smart_free`
```c
void smart_free();
```
Frees all memory allocated with `smart_malloc`, it keeps track of every malloc ;)

Example
-------

Below is a simple usage example of CGC:
```c
#include "cgc.h"

int main() {
    int *num = smart_malloc(sizeof(int));
    if (num == NULL) {
        return 1; // Allocation failed
    }

    *num = 10;
    printf("Number: %d\n", *num);

    smart_free(); // Free all allocated memory
    return 0;
}
```

Note
-------
This is just a side project i am doing for fun, i might use it in some 42 projects, we'll see how it goes :)
