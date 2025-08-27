#include <stdio.h>

// Write a C program that reads two integers and checks whether they are multiplied or not.
 
int main()
{
	int num1;
	int num2;
	
	//take the input
	printf("enter the first number\n");
	scanf("%d", &num1);
	
	printf("enter the second number\n");
	scanf("%d", &num2);
	
	//checks is its miultipli or not
	if (num1 % num2 == 0 || num2 % num1 == 0)
	{
		printf("muiltiplied\n");
	}
	else 
	{
		printf("invalid\n");
	}
	
	return 0;
}