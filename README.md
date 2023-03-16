## Notes

1. When you type gcc main.c, the GCC (GNU Compiler Collection) compiler is invoked to compile the C source file main.c into an executable program. The compiled program will have the default name a.out unless you specify a different name using the -o option.

2. An entry point is the point in the program where the operating system starts executing the code. In C, the entry point is the main() function.

3. main() is a special function in C that serves as the entry point of the program. It is the first function that is executed when the program is run. The main() function should return an integer value to the operating system indicating whether the program terminated successfully (return value of 0) or with an error (non-zero return value).

4. To print text in C, you can use the following functions:
-printf() - used to print formatted text to the standard output (usually the console).
-puts() - used to print a string followed by a newline character to the standard output.
-putchar() - used to print a single character to the standard output.
For example, to print the string "Hello, world!" using printf(), you would write:

`printf("Hello, world!\n");`

5. To get the size of a specific type using the unary operator sizeof, you would write:
`sizeof(type)`
For example, to get the size of an integer variable x, you would write:
`sizeof(int)`

6. To compile a C program using GCC, you would use the following command:
`gcc source_file.c -o output_file`
This will compile the source file source_file.c into an executable program with the name output_file.

7. Thedefault program name when compiling with GCC is a.out. You can specify a different name using the -o option.

8. The official C coding style is not a specific standard, but there are many coding style guides available that provide recommendations for how to format and write C code. One of the commonly used style guides is the GNU Coding Standards. To check your code against a style guide, you can use a tool like betty-style, which is a linter that checks your code for compliance with the Betty style guide.

9. To find the right header to include in your source code when using a standard library function, you can consult the documentation for the library or function in question. The header files for standard library functions usually have names that correspond to the function name or the area of the library they belong to. For example, the stdio.h header file contains declarations for standard input/output functions.

10. The return value of the main() function influences the return value of the program. When the main() function returns 0, it indicates that the program terminated successfully. When it returns a non-zero value, it indicates that the program terminated with an error. The specific value returned by main() can be used by the calling process or the operating system to determine the cause of the error.
