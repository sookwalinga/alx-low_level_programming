#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size in bytes of the memory to be allocated
 *
 * Return: pointer to the allocated memory
 * If malloc fails, the function terminates with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
