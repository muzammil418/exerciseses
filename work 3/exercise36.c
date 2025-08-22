#include <stdio.h>

//Write a C program to print all numbers between 1 and 100 which are divided by an input number and the remainder will be 3.

int main()
{
	// data types
	int i;
	int input;
	
	//take input
	printf("enter the integer:");
	scanf("%d", &input);
	
	//loop is used to divide the value between 1 and 100
	for(i = 1; i <= 100; i++){
		if(i % input == 3){
			printf("%d\n", i);
		}
	}
	
	return 0;
}