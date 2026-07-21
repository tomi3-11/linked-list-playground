# insertion from back

here we insert nodes from the back or tail of the linked list

Creating a node
```c
struct Node {
    int Data;
    struct Node *next;
}
```

## Steps to solving this challenge
1. Start by adding the header files for `I/O` and memory allocation support.
```c
#include <stdio.h>
#include <stdlib.h>
```

2. function prototype
```c
void insertBack(struct Node *head, int value);
```

3. Create a current node from a the head node.
```c
struct Node *current = Head
```

4. we first check if the list is empty, if so then add the value as head.
```c
if (!head) {
    head->Data = value;
}
```

5. Then increment the value of current to the next node (to the tail of the list).
```c
while (current->next){
    current = current->next;
}
```

6. We then create a new node called `newNode` and allocate some heap memory
```c
struct Node *newNode = malloc(sizeof(struct Node));
```

7. Now add the value to the new newNode.
```c
newNode->Data = value;
```

8. Point the current node to the new node
```c
current->next = newNode;
```

Just like that you implemented insertion from back.

here is the visualized solution
![Insertion from back](./insertBack.png)

Documented by: [Tom](https://github.com/tomi3-11)
