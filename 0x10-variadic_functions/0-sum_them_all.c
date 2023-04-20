#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum of all its params
 * @n: the number of params
 * @...: the params to sum
 *
* Return: If n == 0 - 0.
*  Otherwise - sum of all params.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum = 0;

va_start(args, n);

for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
