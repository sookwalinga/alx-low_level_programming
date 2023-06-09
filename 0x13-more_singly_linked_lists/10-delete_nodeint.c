#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: A pointer to the head of the linked list
 * @index: The index of the node to delete (starting at 0)
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

if (*head == NULL)
return (-1);

current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}

if (current == NULL)
return (-1);

prev->next = current->next;
free(current);

return (1);
}
