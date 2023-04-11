#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to the duplicated string, NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *dup;
int i, len;

if (str == NULL)
return (NULL);

for (len = 0; str[len]; len++)
;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];

dup[len] = '\0';

return (dup);
}
