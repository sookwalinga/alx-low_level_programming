#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num_bytes, i;
char *main_ptr = (char *) main;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(main_ptr + i) & 0xff);
if (i < num_bytes - 1)
printf(" ");
else
printf("\n");
}

return (0);
}
