#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

void insertBack(struct Node *head, int value){
    struct Node *current = head;

    if (!head) {
        head->Data = value;
    }

    while (current->next){
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

    free(head);

}
