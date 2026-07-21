#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

void insertBack(struct Node *head, int value){
    struct Node *current = head;

    // check if the list is empty; then add the new value as head
    if (!head) {
        head->Data = value;
    }

    // increment the current value to get to the tail
    while (current->next){
        current = current->next;
    }

    // create a newNode and allocate some memory
    struct Node *newNode = malloc(sizeof(struct Node));
    // add the new value to the newNode
    newNode->Data = value;
    // point the current node to the newNode
    current->next = newNode;
}

void printList(struct Node *dummy){
    struct Node *current = dummy->next;

    while (current){
        printf("%d", current->Data);
        if (current->next) printf("->");
        current = current->next;
    }
    printf("\n");
}

int main(){
    // insert nodes and display them
    struct Node *head = malloc(sizeof(struct Node));

    // insert from back
    insertBack(head, 34);
    insertBack(head, 64);
    insertBack(head, 94);
    insertBack(head, 124);

    // display
    printList(head);
    insertBack(head, 138);
    insertBack(head, 238);
    printList(head);

    free(head);

}
