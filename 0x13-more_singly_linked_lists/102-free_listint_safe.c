#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the first node of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;

if (h == NULL)
exit(98);

current = *h;

while (current != NULL)
{
count++;
temp = current;
current = current->next;
free(temp);

if (temp <= current)
{
*h = NULL;
exit(98);
}
}

*h = NULL;
return (count);
}
