#include <stdlib.h>
#include <stdio.h>

int main()
{
	//data type store integer
	int first;//10
	int second;//20
	int third;//30
	
	//take input
	printf("enter the first integer:");
	scanf("%d", &first);
	
	printf("enter the second integer:");
	scanf("%d", &second);
	
	printf("enter the third integer:");
	scanf("%d", &third);
	
	//statement
	if (first > second && first > third)//10 > 30  
	{
		printf("the maximum value of integers: %d\n", first);
		
	}
	else if (second > first && second > third)//20 > 30
	{
		printf("the maximum value of  integers: %d\n", second);
	}
	else 
	{
		printf("the maximum value of  integers: %d\n", third);
	}
	
	return 0;
	
}