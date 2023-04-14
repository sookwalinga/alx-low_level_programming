#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the new memory block, NULL if memory allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *p;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
return (p);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

p = ptr;
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = p[i];

free(ptr);

return (new_ptr);
}
