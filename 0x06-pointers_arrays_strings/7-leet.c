#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
int i, j;
char leet_map[5][3] = {
{'a', 'A', '4'},
{'e', 'E', '3'},
{'o', 'O', '0'},
{'t', 'T', '7'},
{'l', 'L', '1'}
};

for (i = 0; str[i]; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == leet_map[j][0] || str[i] == leet_map[j][1])
{
str[i] = leet_map[j][2];
break;
}
}
}

return (str);
}
