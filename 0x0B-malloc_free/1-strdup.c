#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns new memory with copy of given string
 * @str: string to copy
 *
 * Return: pointer to string or NULL if no memory.
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
