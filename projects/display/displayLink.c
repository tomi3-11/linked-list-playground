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

int main(){
    // create nodes and allocate memory to it.
    struct Node *node1 = malloc(sizeof(struct Node));
    struct Node *node2 = malloc(sizeof(struct Node));
    struct Node *node3 = malloc(sizeof(struct Node));

    // Add contents to node 1
    node1->data = 12;
    node1->next = node2;

    // Add contents to node 2
    node2->data = 34;
    node2->next = node3;

    // Add contents to node 3
    node3->data = 43;
    node3->next = NULL;


    // display all the lists


}
