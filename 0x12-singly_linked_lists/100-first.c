#include <stdio.h>

/**
 * __attribute__ - Function to print a message before main
 * __constructor__ - This function is executed before main()
 *
 * Return: Nothing
 */
void __attribute__ ((constructor)) premain()
{
printf("You're beat! and yet, you must allow,\n"
       "I bore my house upon my back!\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
return (0);
}
