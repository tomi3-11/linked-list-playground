# Creating a Node in Linked List
This shows a simple way of creating a Node for a linked list.

## How to be implemented in c?
C is not an OOP language, so it will be Kinda hard to implement but no impossible,
so lets do this

- Instead of classes, we will use `structs` in c for creating nodes
- Then we shall need to allocate memory for each node created since we are dealing with pointers
- The remember to free the memory allocated.

### Lets go step by step now

1. Create the header files in c.

```c
#include <stdio.h>
#include <stdlib.h>
```

2. Create the Struct that represent a single node.
```c
struct Node {
    int Data;
    struct Node *next;
};
```

3. Now the main function
Here we need to create nodes and point them to the next node if available or `NULL` if not available.

Then display the data and the memory address of the next node.
```c
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
```

Tara jst like that you have create a node, connected another node to it and formed a small linked list.

Documented by: [Tom](https://github.com/tomi3-11)
