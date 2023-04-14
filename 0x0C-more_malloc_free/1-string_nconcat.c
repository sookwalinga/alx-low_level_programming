#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatenated with n bytes of s2.
 * @s2: string to be concatenated with s1.
 * @n: number of bytes of s2 to be concatenated with s1.
 *
 * Return: pointer to a newly allocated space in memory,
 *         containing s1 followed by the first n bytes of s2,
 *         and null terminated, or NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *new_str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

if (n >= len2)
n = len2;

new_str = malloc(sizeof(char) * (len1 + n + 1));

if (new_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];

for (j = 0; j < n; j++)
new_str[i + j] = s2[j];

new_str[i + j] = '\0';

return (new_str);
}
