1. Pointers:
A pointer is a variable that stores the memory address of another variable. Pointers in C are used to perform dynamic memory allocation, pass parameters by reference, create complex data structures, and manipulate memory directly. To declare a pointer in C, use the '*' character before the variable name, like this:

`int *ptr;`

Here, "ptr" is a pointer to an integer variable.

To access the value stored at the memory address pointed to by a pointer, use the '*' character again, like this:

```
int x = 10;
int *ptr = &x;
printf("%d", *ptr);
```
This will print the value of the variable "x" to the console.

2. Arrays:
An array is a collection of similar data items that are stored in contiguous memory locations. Arrays in C are used to store and manipulate large amounts of data efficiently. To declare an array in C, use square brackets after the variable name, like this:
`int my_array[10];`

This creates an array called "my_array" that can store 10 integer values.

To access an element of an array, use square brackets with the index of the element, like this:

```
int my_array[10];
my_array[0] = 42;
```
This sets the first element of "my_array" to the value 42.

3. Differences between pointers and arrays:
While pointers and arrays are both related to memory in C, they are different in several ways:

A pointer is a variable that stores a memory address, while an array is a collection of contiguous memory locations.
A pointer can point to any type of data, while an array can only store elements of a single type.
Arrays have a fixed size, while pointers can point to memory of any size.

4. Strings:
A string in C is a sequence of characters terminated by a null character '\0'. Strings can be declared as character arrays or as pointers to characters. To declare a string as an array, use double quotes to enclose the characters, like this:

`char my_string[] = "hello world";`

To declare a string as a pointer, use the '*' character, like this:

`char *my_string = "hello world";`

Strings in C can be manipulated using a variety of library functions such as strlen, strcpy, strcat, and others.

5. Scope of variables:
The scope of a variable in C determines where in the program the variable can be accessed. In C, there are three basic levels of scope:

Global: Global variables are declared outside of any function and can be accessed by any function in the program.
Local: Local variables are declared inside a function and can only be accessed within that function.
Block: Block variables are declared inside a block of code, such as a for loop or an if statement, and can only be accessed within that block.
The scope of a variable in C is determined by its location in the program and its declaration.