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

    struct Node *stack  = NULL;

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
    struct Node *newnode = malloc(sizeof(struct Node));
	
	newnode->data = value;
	newnode->next = *top;
	*top = newnode;
	
	return;
}

int pop(struct Node **top) {
    struct Node *temp = *top;
	int value = temp->data;
	
	*top = temp->next;
	
	return value;
}

int peek(struct Node *top) {
    struct  Node *temp = top;
	
	int value = temp->data;
	
	return value;
}