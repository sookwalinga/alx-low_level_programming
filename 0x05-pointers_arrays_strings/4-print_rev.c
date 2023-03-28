#include <stdio.h>

/**
 * _strlen - Computes the length of a string
 *
 * @s: Pointer to the first character of the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return len;
}
