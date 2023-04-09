#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments
 * @argv: an array containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;

(void)argv; /* unused variable */

i = argc - 1;

printf("%d\n", i);

return (0);
}
