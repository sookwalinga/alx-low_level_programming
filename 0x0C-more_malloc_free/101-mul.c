#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments as strings.
 *
 * Return: 0 if successful, 98 if an error occurred.
 */
int main(int argc, char *argv[])
{
unsigned long int num1, num2, result;
int i, j;

if (argc != 3)
{
printf("Error\n");
return (98);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (98);
}
}
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;

printf("%lu\n", result);
return (0);
}
