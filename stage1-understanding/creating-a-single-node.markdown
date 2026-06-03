# Creating a single Node
```c
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *node;

    node = malloc(sizeof(struct Node));

    node->data = 10;
    node->next = NULL;

    printf("%d\n", node->data);

    free(node);
}
```
What happens?
```c
malloc()
    |
    v
+--------+--------+
| data   | next   |
+--------+--------+
|   ?    |   ?    |
+--------+--------+
```
You fill the fields:
```c
+--------+--------+
| 10     | NULL   |
+--------+--------+
```
