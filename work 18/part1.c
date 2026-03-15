#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int count = 0;

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
    struct Node *newnode = malloc(sizeof(struct Node));
	
	if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
	
	newnode->data = value;
	newnode->next = NULL;
	
	if (*head == NULL){
		*head = newnode;
		
		count++;
		return;
	}
	
	struct Node *temp = *head;
	
	for(int i = 1; i < count; i++){
		temp = temp->next;
	}
	
	temp->next = newnode;
	
	count++;
	return;
}

void prepend(struct Node **head, int value) {
    struct Node *newnode = malloc(sizeof(struct Node));
	
	if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
	
	newnode->data = value;
	newnode->next = *head;
	*head = newnode;
	
	count++;
	return;
}

void deleteValue(struct Node **head, int value) {
    struct Node *temp = *head;
	struct Node *pre = *head;
	
	if(temp->data == value){
		*head = temp->next;
		count--;
		free(temp);
		return;
	}
	else{
		temp = temp->next;
	}
	
	 while(temp != NULL){
		if(temp->data == value){
			pre->next = temp->next;
			count--;
			free(temp);
			return;
		}
		else{
			temp = temp->next;
			pre = pre->next;
		}
	}
	 count--;
	 free(temp);
	 return;
}

void printList(struct Node *head) {
    struct Node *temp = head;
	
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
	
	return;
	
}