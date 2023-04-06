#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = strlen(s);
int i;

for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - 1 - i])
{
return 0;
}
}

return (1);
}
