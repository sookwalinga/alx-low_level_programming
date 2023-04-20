## 0x10. C - Variadic functions

### What are variadic functions

Variadic functions are functions that can accept a varying number of arguments. In other words, a variadic function is a function that can take a variable number of arguments. These functions are often used in programming languages to simplify code that would otherwise require multiple functions or complex data structures.

### How to use `va_start`, `va_arg` and `va_end macros`

`va_start` is a macro that initializes a va_list object, which is used to access the additional arguments passed to a variadic function. The va_start macro takes two arguments: the first argument is the va_list object to initialize, and the second argument is the name of the last argument in the function's parameter list.

`va_arg` is a macro that retrieves the next argument from the va_list object. It takes two arguments: the first argument is the va_list object, and the second argument is the type of the argument to retrieve.

`va_end` is a macro that cleans up after a variadic function has finished processing its arguments. It takes one argument: the va_list object to clean up.
Example of a variadic function in C that takes a variable number of integers and returns their sum:

```
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        int value = va_arg(args, int);
        total += value;
    }
    va_end(args);
    return total;
}
```

The `sum` function takes a count parameter followed by a variable number of integer arguments. It initializes a `va_list` object with `va_start`, retrieves each integer argument using `va_arg`, adds them up, and then cleans up the `va_list` object with `va_end`.

The `const` type qualifier in C and C++ is used to indicate that a variable should not be modified. It can be applied to any type, including pointers and arrays. When a variable is declared as `const`, the compiler will generate an error if any attempt is made to modify its value.

Example of how to use const in C:

```
const int MAX_VALUE = 100;

int main()
{
    const int MIN_VALUE = 0;
    int x = 5;
    const int* p = &x;
    *p = 10; // Error: Attempt to modify const variable
    p++;     // OK: Pointer value can be changed
    return 0;
}
```

In this example, the `MAX_VALUE` variable is declared as a global constant with a fixed value of 100. The `MIN_VALUE` variable is declared as a local constant with a fixed value of 0. The `x` variable is declared as an integer that can be modified, and a pointer `p` to the integer is declared as a constant. The `*p = 10` statement will generate an error because `p` is a constant pointer to an integer, and the `p++` statement is allowed because the value of the pointer can be changed even if the value of the integer it points to cannot be changed.
