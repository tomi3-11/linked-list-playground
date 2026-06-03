#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){
    struct Node *first;
    struct Node *second;

    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    printf("%d\n", first->data);
    printf("%d\n", second->data);

    free(first);
    free(second);
}
