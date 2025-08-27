#include <stdio.h>

//Write a C program that finds all the divisors of an integer.

int main()
{
	//data types
	int num, i;
	
	//take input
	printf("enter the number:");
	scanf("%d", &num);
	
	//loop or condition
	for(i = 1;i <= num; i++){
		if (num % i == 0)
		{
			printf ("All the divisor are %d\n", i);
		}
	}
	return 0;
}