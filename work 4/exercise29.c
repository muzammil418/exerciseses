#include <stdio.h>

//Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.

int main()
{
	//data types
	int num1;
	int num2;

	//take input
	printf("enter the first integer:");
	scanf("%d", &num1);

	printf("enter the second integer:");
	scanf("%d", &num2);
	
	// loop or check the condition
	for(num1 = num1; num1 <= num2; num1++){
		if(num1 % 7 == 2 || num1 % 7 == 3 )
		{
			printf("%d\n", num1);
		}
	}

	return 0;

}