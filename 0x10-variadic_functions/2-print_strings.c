#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of args passed to the func
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str, *sep = "";

va_start(args, format);

if (format != NULL)
{
for (unsigned int i = 0; format[i] != '\0'; i++)
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
continue;
}
sep = ", ";
}
}

printf("\n");
va_end(args);
}
