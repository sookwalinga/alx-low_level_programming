#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the arguments passed to the program
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num, k, result;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);
result = 0;

if (num < 0)
{
printf("0\n");
return (0);
}

for (k = 0; k < 5 && num >= 0; k++)
{
while (num >= coins[k])
{
result++;
num -= coins[k];
}
}

printf("%d\n", result);
return (0);
}
