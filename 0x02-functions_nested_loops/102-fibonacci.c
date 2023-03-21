#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, count = 50, fib1 = 1, fib2 = 2, next_fib;

printf("%d, %d", fib1, fib2);

for (i = 2; i < count; i++)
{
next_fib = fib1 + fib2;
printf(", %d", next_fib);
fib1 = fib2;
fib2 = next_fib;
}

printf("\n");

return (0);
}
