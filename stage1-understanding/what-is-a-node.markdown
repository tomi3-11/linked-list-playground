# What is a Node?
A linked list is made of nodes.

A node contains:
1. Data
2. Pointer to the next node.

```c
struct Node {
    int data,
    struct Node *next;
};
```
Visual:
```c
+--------+---------+
| data   | next    |
+--------+---------+
| 10     | 0x2000  |
+--------+---------+
```
The next pointer stores an address.

