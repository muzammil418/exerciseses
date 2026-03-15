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
	struct Node *newnode = malloc(sizeof(struct Node));
	
	newnode->data = value;
	newnode->next = NULL;
	
	if(*head == NULL){
		*tail = newnode;
		*head = *tail;
		
		return;
	}
	
	
	(*tail)->next = newnode;
	*tail = newnode;
	
	return;
}

int dequeue(struct Node **head) {
	if(*head == NULL){
		printf("queue is emty");
		return 1;
	}
	
    struct Node *temp = *head;
	int value = temp->data;
	
	*head = temp->next;
	
	free(temp);
	return value;
}