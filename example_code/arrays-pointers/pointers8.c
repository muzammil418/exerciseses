#include <stdio.h>
#define SIZE_ARR 5

/*
Name of the array variable is the pointer to it's first element in C

Following program shows how to print an array with pointer notation
*/


int main(){
	int arr[SIZE_ARR] = {9,8,7,6,5};
	
	scanf("%d", &arr[0]);
	printf("0th arr value: %d", arr[0]);
	
	scanf("%d", arr);
	printf("0th arr value: %d", arr[0]);
	
	return 0;
}