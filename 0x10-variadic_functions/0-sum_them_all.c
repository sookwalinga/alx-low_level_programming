#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  sum of all its params
 * @n: the number of params
 * @...: the params to sum
 *
 * Return: the sum of params, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

va_start(args, n);

for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
