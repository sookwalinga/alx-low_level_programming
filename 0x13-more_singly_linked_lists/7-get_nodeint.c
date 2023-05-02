#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the listint_t list.
 * @index: Index of the node, starting at 0.
 *
 * Return: The nth node of the listint_t list or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
return (current);

i++;
current = current->next;
}

return (NULL);
}
