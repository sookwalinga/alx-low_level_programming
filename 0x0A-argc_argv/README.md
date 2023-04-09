## 0x0A. C - argc, argv
### How to use arguments passed to your program:
In C and C++ programming languages, you can use the argc and argv parameters of the main function to access the command-line arguments passed to your program. The argc parameter is an integer that represents the number of arguments passed, while argv is an array of strings that holds the arguments themselves.

For example, here is a simple C program that takes two command-line arguments and prints them out:
```
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: %s arg1 arg2\n", argv[0]);
        return 1;
    }

    printf("Arg 1: %s\n", argv[1]);
    printf("Arg 2: %s\n", argv[2]);

    return 0;
}
```
In this program, we first check that the number of arguments passed is exactly 3 (the first argument is the program name). If the number of arguments is not correct, we print a usage message and return an error code. Otherwise, we print out the second and third arguments passed.

### What are two prototypes of main that you know of, and in which case do you use one or the other:
In C and C++ programming languages, there are two common prototypes of the main function:
1. int main(void): This prototype does not accept any arguments and is used when the program does not require command-line arguments.

2. int main(int argc, char *argv[]): This prototype accepts two arguments, argc and argv, which represent the number of command-line arguments and an array of strings containing the arguments, respectively. This prototype is used when the program requires command-line arguments.

### How to use attribute((unused)) or (void) to compile functions with unused variables or parameters:
In C and C++ programming languages, you can use the __attribute__((unused)) or (void) syntax to mark unused variables or parameters in your code. This can be useful to prevent compiler warnings or errors about unused variables or parameters.

For example, here is a simple C function that takes two integers as parameters, but only uses one of them:

```
#include <stdio.h>

int add(int a, __attribute__((unused)) int b)
{
    return a;
}

int main()
{
    int result = add(5, 10);
    printf("Result: %d\n", result);

    return 0;
}
```

In this program, we have marked the second parameter of the add function with __attribute__((unused)) to indicate that it is intentionally unused. This prevents the compiler from issuing warnings about the unused variable.

Alternatively, we could use the (void) syntax to achieve the same effect:

```
int add(int a, void *b)
{
    (void)b; // Unused parameter
    return a;
}
```
In this case, we have used (void) to cast the b parameter to void, which essentially tells the compiler that it is not used in the function. This also prevents the compiler from issuing warnings about the unused parameter.
