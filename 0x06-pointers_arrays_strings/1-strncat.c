#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;

while (dest[dest_len] != '\0')
dest_len++;

while (i < n && src[i] != '\0')
{
dest[dest_len] = src[i];
i++;
dest_len++;
}

dest[dest_len] = '\0';

return dest;
}

/**
 * main - Check the _strncat function.
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;

printf("%s\n", s1);
printf("%s", s2);
ptr = _strncat(s1, s2, 1);
printf("%s\n", s1);
printf("%s", s2);
printf("%s\n", ptr);
ptr = _strncat(s1, s2, 1024);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);
return (0);
}
