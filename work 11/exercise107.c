#include <stdio.h>

struct queue {
	int arr[5];
	int front;
	int rear;
};

void push(struct queue q1, int value){
	if(q1.rear == 4){
		printf("queue is full\n");
        return;
    }
	q1.arr[q1.rear] = value;
	q1.rear++;
}

int main() {
	struct queue q;
	
	push(q, 10);
	
	printf("%d", q.arr[0]);
	
	
	return 0;
}