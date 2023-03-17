#include <stdio.h>

/**
* main - Printing alphabets in lowercase.
* Return: Always 0 (Success)
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
