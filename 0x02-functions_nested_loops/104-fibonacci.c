/*
 * This C program prints the first 98 Fibonacci numbers starting with 1 and 2,
 * separated by a comma and space, followed by a newline. It does not use any
 * libraries other than the standard library, and does not use long long, malloc,
 * pointers, arrays/tables, or structures.
 */

#include <stdio.h>

int main(void)
{
int i, current = 1, next = 2;

printf("%d, %d", current, next);

for (i = 2; i < 98; i++) { // start loop from 2 since we already printed first 2 numbers
int temp = next; // store next value to avoid overwriting
next += current; // calculate next value
current = temp; // set current to previous next value
printf(", %d", next); // print next value, separated by comma and space
}

printf("\n"); // print newline character at end

return 0;
}
