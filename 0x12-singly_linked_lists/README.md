## 0x12. C - Singly linked lists

### When and why using linked lists vs arrays

#### Linked Lists:

- When the size of the list is not known in advance and you need to be able to add or remove elements easily.
- When you need constant-time insertion and deletion at the beginning of the list.
- When memory usage is a concern and you don't want to pre-allocate a large block of memory.
- When you want to be able to insert or delete elements without shifting the entire list (as would be necessary with an array).

#### Arrays:

- When the size of the list is known in advance and will not change.
- When you need constant-time random access to elements (i.e., you need to be able to quickly access elements by index).
- When memory usage is not a concern and you can pre-allocate a large block of memory.

### How to build and use linked lists

1. Define a node structure that contains at least two fields: a data field to hold the value of the element, and a next field to hold a pointer to the next node in the list.
2. Define a variable to hold the head of the list. Initially, this will be set to NULL to indicate an empty list.
3. To add an element to the list, allocate memory for a new node, set its data field to the desired value, and set its next field to the current head of the list. Then, set the head of the list to point to the new node.
4. To traverse the list, start at the head of the list and follow the next pointers until you reach the end of the list (i.e., the node whose next pointer is NULL).
5.
