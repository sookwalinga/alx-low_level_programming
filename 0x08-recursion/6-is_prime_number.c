/**
 * is_prime_number - checks whether a number is prime or not
 *
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
/* base case */
if (n <= 1)
return (0);

return (check_prime(n, 2)); /* start checking from 2 */
}

/**
 * check_prime - helper function to check if a number is prime or not
 *
 * @n: the number to check
 * @i: the number to check for divisibility
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
/* base case */
if (n % i == 0)
return (0);

if (i >= n / 2) /* we only need to check up to n/2 */
return (1);

return (check_prime(n, i + 1)); /* check next number */
}
