#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

int main(){
    // Create Node
    struct Node *node;
    struct Node *node1;

    node = malloc(sizeof(struct Node));
    node1 = malloc(sizeof(struct Node));

    node->Data = 5;
    node->next = node1;
    
    node1->Data = 58;
    node1->next = NULL;
    
    printf("The value is %d and pointer is %p\n", node->Data, (void *)node->next);
    printf("The value is %d and pointer is %p\n", node1->Data, (void *)node1->next);

    free(node);
    free(node1);
    return 0;

}
