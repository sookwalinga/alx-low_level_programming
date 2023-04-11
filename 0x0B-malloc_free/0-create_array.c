#include <stdlib.h>

/**
 * create_array - forms array of char then uses it with a specific char
 * @size: size of the array to be created
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}