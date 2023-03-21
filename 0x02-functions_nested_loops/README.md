### What are nested loops and how to use them
Nested loops are loops that are placed inside another loop. They are used to iterate over two or more collections of data simultaneously. For example, if you have a two-dimensional array, you can use nested loops to iterate over each element in the array. Here's an example:
perl
```
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", i * j);
    }
    printf("\n");
}```

### What is a function and how do you use functions
A function is a self-contained block of code that performs a specific task. It can take input parameters and return a value. Functions are useful because they allow you to reuse code and make your code more modular. To use a function, you first need to declare it and then define it. Here's an example:
csharp

```
// Function declaration
int add(int a, int b);

int main() {
    // Function call
    int sum = add(1, 2);
    printf("Sum: %d\n", sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```
### What is the difference between a declaration and a definition of a function

A function declaration tells the compiler about the existence of a function and its parameters and return type, but does not contain the actual code of the function. A function definition, on the other hand, includes the code of the function. Here's an example:
csharp

```
// Function declaration
int add(int a, int b);

int main() {
    int sum = add(1, 2);
    printf("Sum: %d\n", sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```
### What is a prototype
A function prototype is a declaration of a function that tells the compiler about the function's name, parameters, and return type. It is typically placed at the beginning of a program or in a header file. Here's an example:
csharp

```
// Function prototype
int add(int a, int b);

int main() {
    int sum = add(1, 2);
    printf("Sum: %d\n", sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```
### Scope of variables
The scope of a variable is the region of the program where the variable is visible and can be accessed. In C, there are three types of scope: block scope, function scope, and file scope. A variable declared inside a block is only visible inside that block. A variable declared inside a function is visible throughout the function. A variable declared outside of any function or block has file scope and is visible throughout the entire file.

### What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
-Wall enables all warning messages. -Werror treats warnings as errors. -pedantic enables strict ISO C standards compliance. -Wextra enables additional warning messages not enabled by -Wall. -std=gnu89 sets the C language standard to GNU C89.

### What are header files and how to to use them with #include
Header files are files that contain declarations for functions, variables, and constants that are defined in other source files. They are typically used to share code between multiple source files. To use a header file, you include it in your source code using the #include preprocessor directive. Here's an example:

```
// Contents of myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H

void hello();

#endif

// Contents of main.c
#include "myheader.h"

int main() {
    hello();
    return 0;
}

// Contents of myheader.c
#include <stdio.h>
#include "myheader.h"

void hello

```
