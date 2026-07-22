#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

void insert(struct Node *head, int value){
    struct Node *current = head;

    if (!head){
        head->Data = value;
    }

    while (current->next){
        current = current->next;
    }

    // create a new node and allocate memory to it
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->Data = value;
    current->next = newNode;
}

void printLink(struct Node *head){
    struct Node *current = head->next;

    while (current){
        printf("%d", current->Data);
        if (current->next) printf("->");
        current = current->next;
    }
    printf("\n");
}

void search(struct Node *head, int value){
    struct Node *current = head;

    while (current){
        if (current->Data == value){
            printf("Found, %d\n", value);
            return;
        }
        current = current->next;
    }
    printf("Not found: %d", value);
}

int main(){
    struct Node *head = malloc(sizeof(struct Node));

    insert(head, 12);
    insert(head, 22);
    insert(head, 72);
    insert(head, 23);
    insert(head, 27);

    // print
    printLink(head);

    search(head, 72);
    search(head, 2);


    free(head);
}
