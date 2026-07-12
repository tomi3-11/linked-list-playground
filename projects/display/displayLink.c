#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void append(struct Node *dummy, int value){
    struct Node *current = dummy;

    while (current->next){
        current = current->next;
    }

    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    current->next = newNode;
}

void printList(struct Node *dummy){
    struct Node *current = dummy->next;

    while (current) {
        printf("%d", current->data);
        if (current->next) printf("->");
        current = current->next;
    }
    printf("\n");
}

int main(){
    // create nodes and allocate memory to it.
    //struct Node *node1 = malloc(sizeof(struct Node));
    //struct Node *node2 = malloc(sizeof(struct Node));
    //struct Node *node3 = malloc(sizeof(struct Node));

    struct Node *dummy = malloc(sizeof(struct Node));

    // Add contents to node 1
    //node1->data = 12;
    //node1->next = node2;

    // Add contents to node 2
    //node2->data = 34;
    //node2->next = node3;

    // Add contents to node 3
    //node3->data = 43;
    //node3->next = NULL;


    // Append some content
    append(dummy, 45);
    append(dummy, 56);
    append(dummy, 12);
    append(dummy, 89);

    // display all the lists
    printList(dummy);

    free(dummy);


}
