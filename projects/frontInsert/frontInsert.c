#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

void frontInsert(struct Node *dummy, int value){
    struct Node *currHead = dummy->next;
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->Data = value;
    dummy->next = newNode;
    newNode->next = currHead;
}

void printLink(struct Node *dummy){
    struct Node *current = dummy->next;

    while (current) {
        printf("%d", current->Data);
        if (current->next) printf("->");
        current = current->next;
    }
    printf("\n");
}

int main(){
    // main functionality
    struct Node *dummy = malloc(sizeof(struct Node));

    frontInsert(dummy, 23);
    frontInsert(dummy, 44);
    frontInsert(dummy, 87);

    // display
    printLink(dummy);

    free(dummy);
}
