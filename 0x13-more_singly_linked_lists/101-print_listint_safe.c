#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow_ptr = head, *fast_ptr = head;
size_t count = 0;

if (head == NULL)
exit(98);

while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
{
count++;
printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next->next;

if (slow_ptr == fast_ptr)
{
printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
break;
}
}

if (slow_ptr != fast_ptr)
{
while (head != NULL)
{
count++;
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

return (count);
}
