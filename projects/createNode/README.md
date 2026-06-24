# Creating a Node in Linked List
This shows a simple way of creating a Node for a linked list.

## How to be implemented in c?
C is not an OOP language, so it will be Kinda hard to implement but no impossible,
so lets do this

- Instead of classes, we will use `structs` in c for creating nodes
- Then we shall need to allocate memory for each node created since we are dealing with pointers
- The remember to free the memory allocated.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

int main(){
    // Create Node
    struct Node *node;
    node = malloc(sizeof(struct Node));

    node->Data = 5;
    node->next = NULL;
    
    printf("The value is %d and pointer is %p\n", node->Data, (void *)node->next);

    free(node);
    return 0;

}
