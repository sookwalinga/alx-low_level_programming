#include "main.h"

/**
 * _putchar - initializes char c
 * _puts - prints a string,then a new line, to stdout
 * @str: the string to be printed
 *
 * Return: void
 */
int _putchar(char c);

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
