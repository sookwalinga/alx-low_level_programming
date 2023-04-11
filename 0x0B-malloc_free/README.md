## 0x0B. C - malloc, free
### What is the difference between automatic and dynamic allocation
Automatic allocation refers to the memory allocation that happens automatically when a variable is declared. This type of allocation is done at compile-time and is limited in scope to the block of code where the variable is defined. Dynamic allocation, on the other hand, allows memory to be allocated at runtime and can be resized during program execution.

### What is malloc and free and how to use them
In C programming, malloc() and free() are used for dynamic memory allocation and deallocation, respectively. The malloc() function allocates a block of memory of a specified size and returns a pointer to the first byte of the allocated memory. The syntax for malloc() is:

`ptr = (cast-type*) malloc(byte-size);`

Here, ptr is the pointer to the first byte of the allocated memory block, cast-type is the type to which the pointer should be cast, and byte-size is the number of bytes to be allocated. If malloc() is unable to allocate memory, it returns a NULL pointer.

The free() function deallocates the memory block pointed to by the pointer passed to it. The syntax for free() is:

`free(ptr);`

Here, ptr is the pointer to the memory block to be deallocated.

### Why and when use malloc
Use malloc() when you need to allocate memory dynamically at runtime, such as when you don't know the size of the required memory beforehand or when the required memory size is too large to be allocated using automatic allocation. Malloc() can also be used to allocate memory for arrays and structures.

### How to use valgrind to check for memory leak
To use valgrind to check for memory leaks, you need to first compile your code with the -g option to include debugging information. Then, you can run your code with valgrind using the following command:

`valgrind --leak-check=full ./your_program`

This will check a C program for memory leaks and provide a report on any memory leaks found.
