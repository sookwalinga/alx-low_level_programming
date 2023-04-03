#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard to the console
 * @a: a pointer to an 8x8 array of characters representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
int row, col;
for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
putchar(a[row][col]);
}
putchar('\n');
}
}
