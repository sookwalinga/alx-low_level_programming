#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 *
 * @a: the matrix of integers
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
/* check if we're on the main diagonal */
if (i == j)
sum1 += *(a + (i * size) + j);

/* check if we're on the secondary diagonal */
if (i == size - j - 1)
sum2 += *(a + (i * size) + j);
}
}

printf("%d, %d\n", sum1, sum2);
}
