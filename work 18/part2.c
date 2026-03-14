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
    struct DNode *newnode = malloc(sizeof(struct DNode));
	
	newnode->data = value;
	newnode->next = NULL;
	
	if(*head == NULL){
		newnode->prev = NULL;
		*tail = newnode;
		*head = *tail;
		return;
	}
	
	struct DNode *temp = *head;
	
	newnode->prev = *tail;
	(*tail)->next = newnode;
	*tail = newnode;
	
	return;
}

void printForward(struct DNode *head) {
    struct DNode *temp = head;
	
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
	
	return;
}

void printBackward(struct DNode *tail) {
    struct DNode *temp = tail;
	
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
	
	return;
}