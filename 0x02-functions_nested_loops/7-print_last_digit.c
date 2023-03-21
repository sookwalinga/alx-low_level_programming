#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

/* convert negative numbers to positive */
if (n < 0)
n = -n;

/* get the last digit */
if (n == 0)
last_digit = 0;
else
last_digit = n % 10;

/* print the last digit */
_putchar('0' + last_digit);

/* return the last digit */
return (last_digit);
}
