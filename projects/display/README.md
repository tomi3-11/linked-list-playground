# Display linkedlist
Here we add data to the linked list and display it.

so lets start step by step. and build the linked list then display it.

## Clear implementation

1. First start with the header files

These ones help in `I/O` and memory management
```c
#include <stdio.h>
#include <stdlib.h>
```

2. Create a simple node to be used in the linkedlist
```c
struct Node {
    int data;
    struct Node *next;
}
```

3. Create a function to append data to the linkedlist from the tail
```c
void append(struct Node *dummy, int value){
    struct Node *current = dummy;

    while (current->next) {
        current = current->next;
    }

    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    current->next = newNode;
}
```

This above function does `appending` to the tail of the linkedlist, it checks if there is a next node, then updates the current value.

Then create new node, and add the value to it, then point the current node to the new node.
