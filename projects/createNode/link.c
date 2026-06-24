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
