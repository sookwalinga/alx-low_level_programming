#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_tmp, *needle_tmp;

while (*haystack != '\0')
{
haystack_tmp = haystack;
needle_tmp = needle;
while (*needle_tmp == *haystack_tmp && *needle_tmp != '\0'
&& *haystack_tmp != '\0')
{
needle_tmp++;
haystack_tmp++;
}
if (*needle_tmp == '\0')
return (haystack);
haystack++;
}

return (NULL);
}
