#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
int i, j;
char tmp;

for (i = 0, j = 0; s[j + 1] != '\0'; j++)
{
/* advance j to the end of the string */
}

while (i < j)
{
/* swap characters at positions i and j */
tmp = s[i];
s[i] = s[j];
s[j] = tmp;

/* move i towards the center and j towards the ends */
i++;
j--;
}
}
