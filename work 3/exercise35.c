#include <stdio.h>

//Write a C program to find and print the square of all the even values from 1 to a specified value.

int main()
{
	// data types
	int i;
	int value;
	int count = 0;
	
	//take input and store in data type
	printf("enter the value:");
	scanf("%d", &value);

	//  I don't know how I can define this.
	for(i = 2; i <= value; i += 2){
		if (i % 2 == 0){
			count = i*i;
			printf("%d^2 = %d\n", i,count);
	}
	}

	return 0;
}