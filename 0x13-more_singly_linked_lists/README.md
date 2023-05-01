## 0x13. C - More singly linked lists

### How to use linked lists in C

1. Define a structure to represent the nodes of the linked list. The structure should contain a data element and a pointer to the next node in the list.

```
struct node {
  int data;
  struct node *next;
};
```

2. Create the head pointer, which will point to the first node in the list.
   `struct node *head = NULL;`

3. Allocate memory for the first node in the list using the `malloc()` function.

`head = (struct node*) malloc(sizeof(struct node));`

4. Set the data element of the head node.
   `head->data = 1;`

5. Set the next pointer of the head node to NULL.
   `head->next = NULL;`

6. To add a new node to the list, allocate memory for the new node and set its data element. Then set the next pointer of the new node to the current head pointer and update the head pointer to point to the new node.

```
struct node *new_node = (struct node*) malloc(sizeof(struct node));
new_node->data = 2;
new_node->next = head;
head = new_node;
```

7. To traverse the linked list, use a while loop that iterates over the nodes in the list.

```
struct node *current = head;
while (current != NULL) {
  printf("%d ", current->data);
  current = current->next;
}
```

This will print out the data elements of each node in the linked list. You can modify the data elements, add or remove nodes as necessary, and perform other operations on the linked list using these basic steps.
