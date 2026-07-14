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

4. Create a function to display and print each node of the linkedlist
```c
void printList(struct Node *dummy){
    struct Node *current = dummy->next;

    while (current) {
        printf("%d", current->data);
        if (current->next) printf("->");
        current = current->next;
    }
    printf("\n");
}
```
Here we loop through the list as long as current is not `NULL`, the prints the individual node, then increment the current node.

5. Now call all the functions inside the main fucntion to see them at work
```c
int main(){
    struct Node *dummy = malloc(sizeof(struct Node));

    // Add some data to the list
    append(dummy, 45);
    append(dummy, 56);
    append(dummy, 12);
    append(dummy, 89);

    // display thelist
    printList(dummy);

    free(dummy);
}
```
here we just add data to the list, print the list contents and free the allocated memory.
