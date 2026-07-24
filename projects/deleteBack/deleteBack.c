#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};


void insert(struct Node *dummy, int value){
    struct Node *current = dummy;

    while(current->next){
        current = current->next;
    }

    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->Data = value;
    current->next = newNode;
}

void printList(struct Node *dummy){
    struct Node *current = dummy->next;

    while (current){
        printf("%d", current->Data);
        if (current->next) printf("->");
        current = current ->next;
    }
    printf("\n");
}

void deleteBack(struct Node *dummy){
    struct Node *current = dummy->next;

    while (current->next->next){
        current = current->next;
    }
    struct Node *deleteNode = current->next;
    current->next = NULL;
    free(deleteNode);

}

int main(){
    // insert and display
    struct Node *dummy = malloc(sizeof(struct Node));

    insert(dummy, 23);
    insert(dummy, 45);
    insert(dummy, 89);
    insert(dummy, 19);
    insert(dummy, 21);
    insert(dummy, 23);
    insert(dummy, 79);
    insert(dummy, 59);

    printList(dummy);

    deleteBack(dummy);
    deleteBack(dummy);
    deleteBack(dummy);
    printList(dummy);

    
}
