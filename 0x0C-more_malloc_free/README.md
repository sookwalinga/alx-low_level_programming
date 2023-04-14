## 0x0C. C - More malloc, free

#### How to use the exit function.
The exit function in C is used to terminate the program execution at any point. It is defined in the stdlib.h header file. The function takes an integer argument which represents the exit status of the program. A status value of 0 means successful program completion, and any non-zero value indicates an error or abnormal termination. The exit function should be used carefully because it terminates the program immediately without cleaning up the allocated resources like dynamic memory, file descriptors, etc. It's a good practice to clean up the allocated resources before calling exit.

#### What are the functions calloc and realloc from the standard library and how to use them?

The calloc and realloc functions are also used for dynamic memory allocation in C.

calloc is used to allocate contiguous memory blocks and initialize them to zero. The function takes two arguments: the number of elements to allocate and the size of each element. It returns a pointer to the allocated memory block, or NULL if the allocation fails. The syntax of calloc function is:

`void *calloc(size_t num, size_t size);`

Here's an example of how to use calloc:

```
int *arr;
arr = calloc(10, sizeof(int));
```

This code allocates memory for an integer array of size 10 and initializes all the elements to zero.

realloc is used to change the size of a previously allocated memory block. It takes two arguments: a pointer to the previously allocated block and the new size to allocate. The function returns a pointer to the new memory block, or NULL if the allocation fails. The syntax of realloc function is:

`void *realloc(void *ptr, size_t size);`

Example of how to use realloc:

```
int *arr;
arr = malloc(sizeof(int) * 5);
// allocate memory for 5 integers
arr = realloc(arr, sizeof(int) * 10);
// reallocate memory for 10 integers
```

This code first allocates memory for 5 integers using malloc and then reallocates the memory for 10 integers using realloc. It's important to note that realloc may move the memory block to a new location, so it's necessary to update the pointer to the new block.