#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - exec func on each elem of array
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: function(int) -> void
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
