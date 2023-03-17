#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k, l;

for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
k = i / 10;
l = i % 10;
putchar(k + '0');
putchar(l + '0');
putchar(' ');
k = j / 10;
l = j % 10;
putchar(k + '0');
putchar(l + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
