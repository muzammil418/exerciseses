#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}node;

void insert(node **head, int value){
	node* newnode = malloc(sizeof(node));
	
	newnode->data = value;
	newnode->next = *head;
	*head = newnode;
	
}

void diplay(node **head){
	node* temp = *head;
	
	while(temp != NULL){
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	
	printf("NULL \n");
	
}

int main() {
	node *head = NULL;
	
	insert(&head, 11);
	insert(&head, 12);
	insert(&head, 13);
	insert(&head, 14);
	insert(&head, 15);
	
	diplay(&head);
	
}