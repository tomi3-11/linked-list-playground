#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node *next;
};

void append(struct Node *dummy, int value){
    // Initialize the current value
    struct Node *current = dummy;

    while (current->next){
        current = current->next;
    }

    // create a new object and allocate memory to it.
    struct Node *newNode = malloc(sizeof(struct Node));
    // Add data to the node
    newNode->Data = value;
    current->next = newNode;

}

void printLink(struct Node *dummy){
    struct Node *current = dummy->next;

    while(current){
        printf("%d", current->Data);
        if (current->next) printf("->");
        current = current->next;
    }
    printf("\n");
}


int main(){
    // Main function
    struct Node *dummy = malloc(sizeof(struct Node));

    // Add data to the list
    append(dummy, 23);
    append(dummy, 44);
    append(dummy, 11);
    append(dummy, 89);

    // Display the whole linklist
    printLink(dummy);

    free(dummy);
}
