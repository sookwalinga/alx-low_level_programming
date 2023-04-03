#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*haystack != '\0' && *n != '\0' && *haystack == *n)
{
haystack++;
n++;
}

if (*n == '\0')
return (h);

haystack = h + 1;
}

return (NULL);
}
