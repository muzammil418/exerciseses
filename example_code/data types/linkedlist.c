#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Head pointer (initially empty)
struct Node* head = NULL;

// Insert at beginning
void insert(int value) {

    struct Node* newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Print linked list
void printList() {

    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int length() {

    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

void find(int value){
	struct Node* temp = head;
	
	while (temp != NULL){
		if(temp->data == value){
			printf("value %d is found\n", value);
			return;
		}
		
		temp = temp->next;
	}
	printf("value is not found\n");
}

void deleteNode(int value){
	struct Node* temp = head;
	struct Node* previous = NULL;
	
	while(temp != NULL){
		if(temp->data == value){
			
			if(previous == NULL){
				head = temp->next;
			}
			
			else{
				previous->next = temp->next;
			}
			
			free(temp);
            printf("value %d is removed\n", value);
            return;
		}
		
		previous = temp;
		temp = temp->next;
	}
	
	 printf("value is not found\n");
 }
 
 void insertend(int value){
	  struct Node* newNode = malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;  

    if(head == NULL){
        head = newNode;
        return;
    }

    int len = length();
    struct Node* temp = head;

    for(int i = 1; i < len; i++){
        temp = temp->next;
    }

    temp->next = newNode;
 }

int main() {

    insert(10);
    insert(20);
    insert(30);

    printList();
	
	printf("Length: %d\n", length());

	
    printList();
	
	find(10);
	
	deleteNode(20);
	
	insertend(80);
	
	printList();
	
    return 0;
}

