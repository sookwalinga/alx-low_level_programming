#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * Return: Pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, n1_len, n2_len, carry = 0;

/* Get length of both strings */
for (n1_len = 0; n1[n1_len] != '\0'; n1_len++)
;
for (n2_len = 0; n2[n2_len] != '\0'; n2_len++)
;

/* Check if result can fit in buffer */
if (n1_len > size_r || n2_len > size_r)
return (0);

/* Add digits from both strings */
for (i = n1_len - 1, j = n2_len - 1, k = size_r - 1; i >= 0 || j >= 0; i--, j--, k--)
{
int sum = carry;

if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

if (k < 0)
return (0);

r[k] = sum % 10 + '0';
carry = sum / 10;
}

/* Add carry to result */
if (carry > 0)
{
if (k < 0)
return (0);

r[k--] = carry + '0';
}

/* If result doesn't fit in buffer, return 0 */
if (k < 0)
return (0);

/* Move result to beginning of buffer */
for (i = 0; k < size_r; i++, k++)
r[i] = r[k];

/* Add null terminator */
r[i] = '\0';

return (r);
}
