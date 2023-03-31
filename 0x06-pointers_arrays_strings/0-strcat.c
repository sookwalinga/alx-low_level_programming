#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;

while (dest[dest_len] != '\0')
dest_len++;

while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}

dest[dest_len + i] = '\0';

return (dest);
}
