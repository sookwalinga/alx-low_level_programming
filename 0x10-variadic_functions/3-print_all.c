#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @ap: argument pointer
 */
void print_char(va_list ap)
{
printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an int
 * @ap: argument pointer
 */
void print_int(va_list ap)
{
printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: argument pointer
 */
void print_float(va_list ap)
{
printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: argument pointer
 */
void print_string(va_list ap)
{
char *str = va_arg(ap, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: format string containing types of arguments
 */
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0, j = 0;
char *separator = "";
print_fn_t print_fn[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

va_start(ap, format);

while (format && format[i])
{
j = 0;
while (print_fn[j].type != '\0')
{
if (format[i] == print_fn[j].type)
{
printf("%s", separator);
print_fn[j].fn(ap);
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");

va_end(ap);
}
