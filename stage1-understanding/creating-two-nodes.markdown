# Creating Two Nodes
```c
struct Node *first;
struct Node *second;

first = malloc(sizeof(Struct Node));
second = malloc(sizeof(struct Node));

first->data = 10;
first->next = second;

second->data = 20;
second->next = NULL;
```
Visualization:
```c
first
  |
  v
+----+------+     +----+------+
|10  |  *---|---->|20  |NULL |
+----+------+     +----+------+
```
Or:
```c
10 -> 20 -> NULL
```
