## 0x0F. C - Function pointers

### What are function pointers and how to use them
Function pointers are a feature of the C programming language that allow programmers to store and manipulate the memory addresses of functions. A function pointer is a variable that stores the memory address of a function, allowing the programmer to call the function indirectly through the pointer.

Example of how to declare and use a function pointer in C:

```
#include <stdio.h>

void foo() {
    printf("Hello, world!\n");
}

int main() {
    void (*func_ptr)() = &foo; // Declare and initialize a function pointer to point to the address of "foo"

    (*func_ptr)(); // Call the function indirectly through the pointer

    return 0;
}
```

