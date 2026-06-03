# The main Idea
Instead of storing elements together:
```c
10 20 30 40
```
Store them anywhere in memory and connect them.
```c
10 -> 20 -> 30 -> 40 -> NULL
```
Each element knows where the next one is.
