#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns sum of all data (n) of a listint_t linked list.
 * @head: Pointer to head of listint_t list.
 *
 * Return: Sum of all data (n) or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
