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

In this example, we declare a function foo that prints a message to the console. We then declare a function pointer variable func_ptr using the syntax void (*func_ptr)() which indicates that func_ptr is a pointer to a function that takes no arguments and returns nothing. We then initialize func_ptr to point to the address of foo using the address-of operator &. Finally, we call the function indirectly through the pointer using the syntax (*func_ptr)().

### What does a function pointer exactly hold

A function pointer holds the memory address of a function, which is a numeric value representing the location of the first instruction of the function's code in the virtual memory of the program. The function pointer itself is a variable that is stored in memory like any other variable, and its value is the memory address of the function it points to.

### Where does a function pointer point to in the virtual memory

The memory location pointed to by a function pointer is typically located in the code segment of the program's virtual memory, which is a read-only area of memory containing the executable code of the program.

Function pointers are a powerful feature of the C language that allow for dynamic dispatch and can be used to implement many programming patterns such as callbacks, function arrays, and function pointers as arguments.
