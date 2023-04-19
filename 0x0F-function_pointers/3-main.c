#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints output of simple ops.
 * @argc: The num of arguments in the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *op;

if (argc != 4)
{
printf("Error\n");
return (EXIT_FAILURE);
}

num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
return (EXIT_FAILURE);
}

if ((*op == '/' || *op == '%') && num2 == 0)
{
printf("Error\n");
return (EXIT_FAILURE);
}

result = get_op_func(op)(num1, num2);
printf("%d\n", result);

return (EXIT_SUCCESS);
}
