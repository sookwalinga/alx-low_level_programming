#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns value of a bit at a given index
 * @n: number to get bit from
 * @index: index bit to retrieve
 *
 * Return: value bit at given index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

return ((n >> index) & 1);
}
