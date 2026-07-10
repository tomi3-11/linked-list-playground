#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

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
    return 0;
}
