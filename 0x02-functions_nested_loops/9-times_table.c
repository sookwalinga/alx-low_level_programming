#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting point for printing
 *
 * Return: void
 */
void times_table(void)
{
int i, j, res;

for (i = 0; i <= 9; i++)
{
_putchar('0');
_putchar(',');
_putchar(' ');

for (j = 1; j <= 9; j++)
{
res = i * j;
if (res < 10)
{
_putchar(' ');
_putchar(res + '0');
}
else
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}

if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}