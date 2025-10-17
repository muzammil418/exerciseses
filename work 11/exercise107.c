#include <stdio.h>

struct queue {
	int arr[5];
	int front;
	int rear;
};

//create a function to add value i q
void push(struct queue* q1, int value1){
	//check the rear is full or not
	if(q1->rear == 4){
		printf("queue is full\n");
        return;
    }
	//add 1 in rear or add the value in array at the rear position
	q1->rear++;
	q1->arr[q1->rear] = value1;
	
	//condition check is the rear is 0 then = front equal to 0
	if(q1->rear == 0){
		q1->front = 0;
	}
};

//create a function to remove value from q
void pop(struct queue* q1){
	//condition check is front is == to -1 or greater than rear then return
	if(q1->front == -1 ||q1->front > q1->rear){
		printf("queue is emty\n");
		return;
	}
	
	//removed the value from the array or +1 in front
	int removed = q1->arr[q1->front]; 
	printf("value removed: %d\n", removed);
	q1->front++;
	
	//condition check if the front become greater than rear = -1
	if(q1->front > q1->rear){
		q1->front = -1;
		q1->rear = -1;
	}
}

int main() {
	struct queue q;
	q.rear = -1;
	q.front = -1;
	int choice = 0;
	int value = 0;
	
	printf("enter 1 to add value in q\n");
	printf("enter 2 to removed the value from q\n");
	printf("enter 3 to exit the program\n");
	
	while (1){
		printf("enter the choice: \n");
		scanf("%d", &choice);
		
		if (choice == 1){
			printf("enter the value you want to add in q: \n");
			scanf("%d", &value);
			push(&q, value);
		}
		else if(choice == 2){
			pop(&q);
		}
		else if (choice == 3){
			printf("exiting..\n");
			break;
		}
		else{
			printf("invalid value\n");
		}
	}
	
	return 0;
}