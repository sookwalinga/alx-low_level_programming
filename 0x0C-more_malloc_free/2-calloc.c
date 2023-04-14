#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory.
 * @nmemb: Number of elements of the array.
 * @size: Size in bytes of each element.
 *
 * Return: Pointer to the allocated memory or NULL if the allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

/* Initialize the memory to zero */
_memset(ptr, 0, nmemb * size);

return (ptr);
}
