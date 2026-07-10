# Creating a Node

Here we create a node and displays the data stored in the node and where it is pointing to.

Lets go through the difference stages
1. First the header files
```c
#include <stdio.h> // for I/O operations
#include <stdlib.h> // for memory management
```
2. Create the node using the `struct` Data structure
```c
struct Node {
    int Data;
    struct Node *next;
};
```

3. Now manipulating the node, adding data and pointer, memory allocation
```c
int main(){
    // print the node and its pointer
    // Create an object 
    struct Node *node;

    // allocate memory
    node = malloc(sizeof(struct Node));

    // Add data
    node->Data = 5;
    node->next = NULL;

    // Display the node, (Data and pointer)
    printf("The Node:\n\tData: %d\n\tPointer: %p", node->Data, (void *)node->next);
    free(node);
    return 0;
}
```

Here we display the data in the node, it's pointer. we do memory management using `malloc` and remember to free the memory.

Documented By: [Tom](https://github.com/tomi3-11)
