#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *pnext;
};

// function prototypes
void display(int a, struct Node *b);

int main(){
    struct Node *node1;
    struct Node *node2;
    struct Node *node3;
    struct Node *node4;
    struct Node *node5;

    node1 = malloc(sizeof(struct Node));
    node2 = malloc(sizeof(struct Node));
    node3 = malloc(sizeof(struct Node));
    node4 = malloc(sizeof(struct Node));
    node5 = malloc(sizeof(struct Node));

    node1->data = 23;
    node1->pnext = node2;

    node2->data = 45;
    node2->pnext = node3;

    node3->data = 32;
    node3->pnext = node4;

    node4->data = 89;
    node4->pnext = node5;

    node5->data = 12;
    node5->pnext = NULL;

    display(node1->data, node1->pnext);
    display(node2->data, node2->pnext);
    display(node3->data, node3->pnext);
    display(node4->data, node4->pnext);
    display(node5->data, node5->pnext);
    printf("\n");

    //printf("The value of node1 is %d and is pointing to %p which the real value is %d\n", node1->data, (void *)node1->pnext, node1->pnext->data);
    //printf("The value of node2 is %d and is pointing to %p\n", node2->data, (void *)node2->pnext);
    //printf("The value of node3 is %d and is pointing to %p\n", node3->data, (void *)node3->pnext);
    //printf("The value of node4 is %d and is pointing to %p\n", node4->data, (void *)node4->pnext);
    //printf("The value of node5 is %d and is pointing to %p\n", node5->data, (void *)node5->pnext);
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
}

void display(int a, struct Node *b){
    printf("[%d | %p] ->", a, (void *)b);
}




/* Verison typedef */

//typedef struct {
//    int val;
//    struct Node *pnext;
//} Node;
//
//
//int main(){
//    Node *node1;
//    Node *node2;
//    
//    node1 = malloc(sizeof(Node));    
//    node2 = malloc(sizeof(Node));
//
//    node1->val = 10;
//    node1->pnext = node2;
//
//    node2->val = 20;
//    node2->pnext = NULL;
//
//    printf("Node1  value: %d and is point to %p\n", node1->val, (void *)node1->pnext);
//    printf("Node2  value: %d and is point to %p", node2->val, node2->pnext);
//    //printf("Node2  value: %d", node1->val);
//    //printf("Node 2 value: %d", link2.val);
//
//    free(node1);
//}
