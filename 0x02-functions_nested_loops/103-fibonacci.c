#include <stdio.h>

/**
 * main - Entry point, prints the sum of even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int first = 1, second = 2, next = 0;
long int sum = 2;

while (next <= 4000000)
{
next = first + second;
first = second;
second = next;
if (next % 2 == 0)
sum += next;
}

printf("%ld\n", sum);

return (0);
}
