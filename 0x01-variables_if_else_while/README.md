## Notes
1. Arithmetic operators in C include addition (+), subtraction (-), multiplication (*), division (/), and modulus (%). They are used to perform basic mathematical operations on variables and constants.

2. Logical operators in C include AND (&&), OR (||), and NOT (!). They are used to evaluate logical expressions and determine whether a condition is true or false.

3. Relational operators in C include greater than (>), less than (<), greater than or equal to (>=), less than or equal to (<=), equal to (==), and not equal to (!=). They are used to compare values and determine whether a condition is true or false.

4. In C, the integer value 0 is considered FALSE, while any non-zero integer value is considered TRUE.

5. Boolean operators in C include AND (&&), OR (||), and NOT (!). They are used to combine multiple logical expressions and evaluate their truth value.

6. The if statement is used in C to conditionally execute a block of code based on a specified condition. The syntax is:
```
if (condition) {
    // code to execute if condition is true
}
```

7. Comments in C are used to add notes and explanations to code. Single-line comments begin with //, while multi-line comments are enclosed in /* */.

8. To declare a variable in C, specify its type followed by its name. For example:

```
char myChar;
int myInt;
unsigned int myUnsignedInt;
```

9. To assign a value to a variable in C, use the assignment operator (=). For example:
```
myChar = 'A';
myInt = 42;
myUnsignedInt = 123;
```

10. To print the value of a variable in C, use the printf function. For example:
```
printf("myChar: %c\n", myChar);
printf("myInt: %d\n", myInt);
printf("myUnsignedInt: %u\n", myUnsignedInt);
```

11. The while loop in C is used to repeatedly execute a block of code as long as a specified condition is true. The syntax is:

```
while (condition) {
    // code to execute while condition is true
}
```

12. To use variables with the while loop, simply include the variable in the condition. For example:

```
int count = 0;
while (count < 10) {
    printf("%d\n", count);
    count++;
}
```
13. To print variables using printf, use the appropriate format specifier for the variable's type. For example, use %d for integers and %c for characters.

14. The ASCII character set is a standard for representing characters as numerical codes. In ASCII, each character is assigned a unique code ranging from 0 to 127.

15. The gcc flags -m32 and -m64 specify the target architecture for the compiler. -m32 generates code for a 32-bit architecture, while -m64 generates code for a 64-bit architecture.
