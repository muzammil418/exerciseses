#include <stdio.h>
#define SIZE_ARR 5

struct pointertest{
	int arr[50];
};

void printMyArray(struct pointertest *p1, int sz){
	for(int i=0; i<sz; i++){
		printf("%d\n", *(p1->arr + i) );
	}
}

int main(){
	struct pointertest p1[7] = {{9,8,7,6,5,453,453}};
	
	// int arr[SIZE_ARR] = {9,8,7,6,5};
	
	
	// int* ptrX = &arr[0]; // RHS: Address of 'x'. Address is a pointer.
	
	printf("Printing my array\n");
	printMyArray(&p1, SIZE_ARR);
	
	printf("Address of 1st position by name: %d\n", p1);
	//printf("Address of 1st position by pointer: %d\n", ptrX);
	
	return 0;
}