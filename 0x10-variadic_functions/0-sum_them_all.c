/**
 * sum_them_all - func that returns sum of its params.
 * @n: constant unsigned integer.
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum = 0;
if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}