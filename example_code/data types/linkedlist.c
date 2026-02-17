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

void removeFirst() {

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);
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


int main() {

    insert(10);
    insert(20);
    insert(30);

    printList();
	
	printf("Length: %d\n", length());

    removeFirst();

    printList();

    return 0;
}

