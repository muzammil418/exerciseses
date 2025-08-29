#include <stdio.h>

//Write a program to take a number n as input, and print the numbers in reverse till 0. In other words, print from n to 0.


int main()
{
	//data types
	int number;
	int i;
	
	//take input
	printf("enter the number:");
	scanf("%d", &number);
	
	// loop print value bakwards
	for(i = number;i >= 0; i--){
		printf("%d ", i);
	}
	
	return 0;
}