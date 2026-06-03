# Understanding the Pointer
Suppose:
```c

Node A at 0x1000
Node B at 0x2000
Node C at 0x3000
```
Memory:
```c
0x1000:
+-----+--------+
| 10  | 0x2000 |
+-----+--------+

0x2000:
+-----+--------+
| 20  | 0x3000 |
+-----+--------+

0x3000:
+-----+--------+
| 30  | NULL   |
+-----+--------+
```
Visualization:
```c
10 -> 20 -> 30 -> NULL
```
The nodes don't have to be physically next to each other.
