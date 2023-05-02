#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of linked list.
 * @h: Pointer to head of listint_t list.
 *
 * Return: Number of nodes in list.
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
nodes++;
h = h->next;
}

return (nodes);
}
