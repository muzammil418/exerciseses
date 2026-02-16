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

int main() {

    insert(10);
    insert(20);
    insert(30);

    printList();

    return 0;
}

