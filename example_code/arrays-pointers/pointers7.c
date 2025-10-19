#include <stdio.h>
#define SIZE_ARR 5

/*
Name of the array variable is the pointer to it's first element in C

Following program shows how to print an array with pointer notation
*/

void printMyArray(int* arr, int sz){
	for(int i=0; i<sz; i++){
		printf("%d\n", *(arr+i) );
	}
}

int main(){
	int arr[SIZE_ARR] = {9,8,7,6,5};
	
	int* ptrX = &arr[0]; // RHS: Address of 'x'. Address is a pointer.
	
	printf("Printing my array\n");
	printMyArray(arr, SIZE_ARR);
	
	printf("Address of 1st position by name: %d\n", arr);
	printf("Address of 1st position by pointer: %d\n", ptrX);
	
	return 0;
}