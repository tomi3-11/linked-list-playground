// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node *dummy;
struct Node *tail; //change append to O(1)
struct Node *head; 

// O(n)
void append(struct Node *dummy, int value){
    struct Node *current = dummy;
    
    while(current->next){
        current = current->next;
    }
    
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->val = value;
    current->next = newNode; 
}

void deleteNode(struct Node *dummy, int value){
    struct Node *current = dummy;
    
    while(current->next && current->next->val != value){
        current = current->next;
    }
    
    struct Node *toDelete = current->next;
    current->next = current->next->next;
    free(toDelete);
}

void deleteNodes(struct Node *dummy, int value){
    struct Node *current = dummy;
    
    while(current){
        while(current->next && current->next->val == value){
            struct Node *toDelete = current->next;
            current->next = current->next->next;
            free(toDelete);
        }
        current = current->next;
    }
}

void append2(struct Node *head, int value){
    if(!head->val){
        head->val = value;
        return;
    }
6r    
    struct Node *current = head;
    
    while(current->next){
        current = current->next;
    }
    
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->val = value;
    current->next = newNode;
    
}


void printList(struct Node *dummy){
    struct Node *current = dummy->next;
    
    while(current){
        printf("%d", current->val);
        if(current->next) printf("->");
        current = current->next;
    }
    printf("\n");
}


int main() {
    // Write C code here
    dummy = malloc(sizeof(struct Node));
    
    append(dummy, 1);
    append(dummy, 2);
    append(dummy, 3);
    append(dummy, 2);
    
    printList(dummy);
    
    deleteNodes(dummy, 2);
    
    // struct Node *node1;
    // struct Node *node2;
    // struct Node *node3;
    // struct Node *node4;
    
    // node1 = malloc(sizeof(struct Node));
    // node2 = malloc(sizeof(struct Node));
    // node3 = malloc(sizeof(struct Node));
    // node4 = malloc(sizeof(struct Node));
    
    // dummy->next = node1;
    // node1->val = 1;
    // node1->next = node2;
    // node2->val = 2;
    // node2->next = node3;
    // node3->val = 3;
    // node3->next = node4;
    // node4->val = 4;
    
    printList(dummy);
    
    return 0;
}


