## 0x12. C - Singly linked lists

Linked lists are a popular data structure used in computer science and programming to store and manipulate collections of data. They are particularly useful when the size of the data is unknown or when the data needs to be dynamically allocated.

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

STEP 1: Define a structure for the nodes in the linked list. Each node should contain two fields: a data field to store the actual data and a pointer field to point to the next node in the list.

```
struct node {
    int data;
    struct node* next;
};
```

STEP 2: Create a function to add new nodes to the linked list. The function should take a pointer to the head of the list and the data to be added as input parameters. The function should create a new node, set its data field to the input data, and add it to the end of the list.

```
void addNode(struct node** head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        struct node* last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
    }
}
```

STEP 3: Create a function to delete nodes from the linked list. The function should take a pointer to the head of the list and the data to be deleted as input parameters. The function should search for the node containing the input data and remove it from the list.

```
void deleteNode(struct node** head, int data) {
    struct node* temp = *head;
    struct node* prev = NULL;

    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
    free(temp);
}
```

STEP 4: Traverse the linked list to access the data stored in each node. The traversal function should take a pointer to the head of the list as input parameter and print the data in each node.

```
void printList(struct node* head) {
    struct node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
```

STEP 5: Create a main function to test the linked list functions.

```
int main() {
    struct node* head = NULL;

    addNode(&head, 1);
    addNode(&head, 2);
    addNode(&head, 3);
    addNode(&head, 4);

    printList(head); // Output: 1 2 3 4

    deleteNode(&head, 3);

    printList(head); // Output: 1 2 4

    return 0;
}
```

SUMMARY: Building and using linked lists involves defining a structure for the nodes in the list, creating functions to add and delete nodes, traversing the list to access the data, and testing the functions using a main function.
