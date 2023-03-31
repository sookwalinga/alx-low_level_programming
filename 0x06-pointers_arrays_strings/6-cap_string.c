#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @str: Pointer to string.
 *
 * Return: Pointer to modified string.
 */
char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
/* capitalize first letter of each word */
if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
 s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
 s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
 s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
 s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] -= 32; /* ASCII code for uppercase letters */
}
}

return s;
}
