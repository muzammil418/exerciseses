Worksheet 18
Date: 11th of March, 2026
Points: 10

Note:
1. Do not write code that you don't understand or would not be able to explain yourself. This includes the syntax of the program, the interpreation of the code including functions, datastructures, and algorithms used throughout the program.
2. Use any and all tools/techniques necessary (including AI) to ask questions, understand code, or ask for clarifications, or ask for syntax, or ask for how things work. However, you may not use AI to have it write the code for you. In other words, you write the code -- the AI may help with understanding, clarifications ONLY.
3. Save the code for each part seperately in part1.c, part2.c, part3.c, and part4.c

===========================================================================================

# Assignment: Building and Using Linked Lists

---

# Reminder: Stack and Queue

### Stack

A **stack** is a data structure where elements are added and removed from the **same end**.

Principle: **LIFO (Last In, First Out)**

Example:

```
Push: 1, 2, 3
Stack top: 3

Pop → removes 3
Next pop → removes 2
```

Common operations:

* `push()` – add element to top
* `pop()` – remove top element
* `peek()` – read top element

Real-world example: **undo operations in text editors**

---

### Queue

A **queue** is a data structure where elements are added at one end and removed from the other.

Principle: **FIFO (First In, First Out)**

Example:

```
Enqueue: 1, 2, 3

Dequeue → removes 1
Next dequeue → removes 2
```

Common operations:

* `enqueue()` – add element at the end
* `dequeue()` – remove element from the front

Real-world example: **people waiting in line**

---

# Part 1 — Build a Singly Linked List

You must implement the following functions:

* `append`
* `prepend`
* `deleteValue`
* `printList`

Do **not modify `main()`**.

---

### Starter Code

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void append(struct Node **head, int value);
void prepend(struct Node **head, int value);
void deleteValue(struct Node **head, int value);
void printList(struct Node *head);

int main() {

    struct Node *head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    printf("After append:\n");
    printList(head);
    // Expected:
    // 10 20 30

    prepend(&head, 5);

    printf("After prepend:\n");
    printList(head);
    // Expected:
    // 5 10 20 30

    deleteValue(&head, 20);

    printf("After deleting 20:\n");
    printList(head);
    // Expected:
    // 5 10 30

    return 0;
}

void append(struct Node **head, int value) {
    // TODO
}

void prepend(struct Node **head, int value) {
    // TODO
}

void deleteValue(struct Node **head, int value) {
    // TODO
}

void printList(struct Node *head) {
    // TODO
}
```

---

# Part 2 — Extend to a Doubly Linked List

Now implement a **doubly linked list**.

Each node must contain:

* `data`
* `next`
* `prev`

You will maintain both:

* **head**
* **tail**

---

### Starter Code

```c
#include <stdio.h>
#include <stdlib.h>

struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
};

void append(struct DNode **head, struct DNode **tail, int value);
void printForward(struct DNode *head);
void printBackward(struct DNode *tail);

int main() {

    struct DNode *head = NULL;
    struct DNode *tail = NULL;

    append(&head, &tail, 1);
    append(&head, &tail, 2);
    append(&head, &tail, 3);

    printf("Forward:\n");
    printForward(head);
    // Expected:
    // 1 2 3

    printf("Backward:\n");
    printBackward(tail);
    // Expected:
    // 3 2 1

    return 0;
}

void append(struct DNode **head, struct DNode **tail, int value) {
    // TODO
}

void printForward(struct DNode *head) {
    // TODO
}

void printBackward(struct DNode *tail) {
    // TODO
}
```

---

# Part 3 — Using a Linked List to Build a Stack

Implement a **stack using a singly linked list**.

Use the **head of the list as the top of the stack**.

Required functions:

* `push`
* `pop`
* `peek`

---

### Starter Code

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node **top, int value);
int pop(struct Node **top);
int peek(struct Node *top);

int main() {

    struct Node *stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(stack));
    // Expected: 30

    printf("Pop: %d\n", pop(&stack));
    printf("Pop: %d\n", pop(&stack));
    // Expected:
    // 30
    // 20

    printf("Top element: %d\n", peek(stack));
    // Expected: 10

    return 0;
}

void push(struct Node **top, int value) {
    // TODO
}

int pop(struct Node **top) {
    // TODO
}

int peek(struct Node *top) {
    // TODO
}
```

---

# Part 4 — Using a Linked List to Build a Queue

Implement a **queue using a linked list**.

Use:

* **head = front**
* **tail = rear**

Required functions:

* `enqueue`
* `dequeue`

---

### Starter Code

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void enqueue(struct Node **head, struct Node **tail, int value);
int dequeue(struct Node **head);

int main() {

    struct Node *head = NULL;
    struct Node *tail = NULL;

    enqueue(&head, &tail, 1);
    enqueue(&head, &tail, 2);
    enqueue(&head, &tail, 3);

    printf("Dequeue: %d\n", dequeue(&head));
    printf("Dequeue: %d\n", dequeue(&head));

    // Expected:
    // 1
    // 2

    enqueue(&head, &tail, 4);

    printf("Dequeue: %d\n", dequeue(&head));
    printf("Dequeue: %d\n", dequeue(&head));

    // Expected:
    // 3
    // 4

    return 0;
}

void enqueue(struct Node **head, struct Node **tail, int value) {
    // TODO
}

int dequeue(struct Node **head) {
    // TODO
}
```

---
