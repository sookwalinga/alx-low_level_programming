#include <stdio.h>

/**
 * premain - Function to print a message before main
 *
 * Return: Nothing
 */
void __attribute__ ((constructor)) premain(void)
{
printf("You're beat! and yet, you must allow,\n"
   "I bore my house upon my back!\n");
}
