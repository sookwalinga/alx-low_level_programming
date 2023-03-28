#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the first character of the string
 */
void puts_half(char *str)
{
int i, len = 0;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;

while (i < len)
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
