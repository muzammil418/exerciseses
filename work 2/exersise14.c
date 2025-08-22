#include <stdlib.h>
#include <stdio.h>

int main()
{
	//data type store integer
	int first;
	int second;
	
	//take input
	printf("enter the first integer:");
	scanf("%d", &first);
	
	printf("enter the second integer");
	scanf("%d", &second);
	
	//statement
	if (first < second) // (5 < 10)
	{
		printf("Minimum value of the two integers: %d\n", first);
	}
	 if (first > second)
	 {
		 printf("Minimum value of the two integers: %d\n", second);
	 }
	

}