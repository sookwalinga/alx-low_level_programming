Pointers to Pointers:
A pointer to a pointer is a variable that holds the address of another pointer variable. It is also known as a double pointer or a pointer of a pointer. A pointer to a pointer is used when we need to modify the value of a pointer variable from a function.

E.g.:
```
#include <stdio.h>

void func(int **pptr)
{
    int val = 20;
    *pptr = &val;
}

int main()
{
    int num = 10;
    int *ptr = &num;
    printf("Before calling func(), ptr points to %d\n", *ptr);

    func(&ptr);
    printf("After calling func(), ptr points to %d\n", *ptr);

    return 0;
}
```

In the above example, we declared a function called func that takes a pointer to a pointer as its parameter. Inside the function, we created a variable val and assigned it the value 20. We then set the value of the pointer to the address of val.

In the main function, we declared a variable num and initialized it to 10. We then created a pointer ptr and assigned it the address of num. We then called the func function and passed the address of ptr as its argument. After the function call, ptr now points to the address of val, and its value is 20.

2. Multidimensional Arrays:
A multidimensional array is an array of arrays. It is used when we need to represent data in multiple dimensions, such as a matrix. In C, we can create a multidimensional array by declaring an array of arrays.

E.g.:
```
#include <stdio.h>

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("The value at arr[0][0] is %d\n", arr[0][0]);
    printf("The value at arr[1][2] is %d\n", arr[1][2]);

    return 0;
}
```

In the above example, we declared a two-dimensional array called arr with two rows and three columns. We then initialized the array with the values 1, 2, 3 in the first row and 4, 5, 6 in the second row. We then printed the value at index [0][0] and [1][2] of the array.

3. Common C Standard Library Functions for String Manipulation:
The C standard library provides a set of functions for working with strings. Some of the most commonly used string manipulation functions are:
strlen: returns the length of a string.
strcpy: copies one string to another.
strcat: concatenates two strings.
strcmp: compares two strings.
strchr: searches for a character in a string.
strstr: searches for a substring in a string.

