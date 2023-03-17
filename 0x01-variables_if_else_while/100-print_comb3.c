#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;

for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 10; j++)
{
k = 10 * i + j;

putchar((k / 10) + '0');
putchar((k % 10) + '0');

if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
