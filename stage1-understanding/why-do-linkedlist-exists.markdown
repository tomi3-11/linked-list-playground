# Why do Linked List Exists
Suppose you have an array:
```c
int numbers[5] = {10, 20, 30, 40, 50};
```

Memory looks something like this:
```c
Address     Value
1000        10
1004        20
1008        30
1012        40
1016        50
```

Arrays have two major requirements:
1. Elements must be stored contigously.
2. Size is usually fixed.

if you want to insert `15` between `10` and `20`:
```c
10 20 30 40 50
```
becomes
```c
10 15 20 30 40 50
```
Every element after `10` must be shifted.

This can be expensive.

Linked lists solve this differently.

