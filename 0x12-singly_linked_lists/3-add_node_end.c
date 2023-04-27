#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: A pointer to the head of the list.
 * @str: The string to be added to the list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp_node;
size_t len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

while (new_node->str[len])
len++;

new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
temp_node = *head;
while (temp_node->next != NULL)
temp_node = temp_node->next;
temp_node->next = new_node;
}

return (new_node);
}
