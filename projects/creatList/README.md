# Creating a Node in Linked List
This shows a simple way of creating a Node for a linked list.

## How to be implemented in c?
C is not an OOP language, so it will be Kinda hard to implement but not impossible,
so lets do this

- Instead of classes, we will use `structs` in c for creating nodes
- Then we shall need to allocate memory for each node created since we are dealing with pointers
- Then remember to free the memory allocated.

### Lets go step by step now

1. Create the header files in c. This simply gives us input/output capabilities and memory management capabilities in c.

```c
#include <stdio.h>
#include <stdlib.h>
```

2. Create the Struct that represent a single node. <br>
Here we have `[Data | next ]`, that means data and a pointer to the next node.
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
    struct Node *node1;

    node = malloc(sizeof(struct Node));
    node1 = malloc(sizeof(struct Node));

    node->Data = 5;
    node->next = node1;

    node1->Data = 23;
    node1->next = NULL
    
    printf("The value is %d and pointer is %p\n", node->Data, (void *)node->next);
    printf("The value is %d and pointer is %p\n", node1->Data, (void *)node1->next);

    free(node);
    free(node1);
    return 0;

}
```

Tara jst like that you have created a node, connected another node to it and formed a small linked list.

### Questions to take after this:
1. What should head point to when the list is empty?
> Ans: Head should point to zero; since it ti not linked to any other node when the list is empty.

2. How do you know the list contains no nodes?
> When Head points to `NULL`.

Documented by: [Tom](https://github.com/tomi3-11)
