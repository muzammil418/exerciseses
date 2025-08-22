#include <stdio.h>
#include <stdlib.h>

int main()
{
	float user1,user2;
	char oppy;
	
	printf("enter the first number : ");
	scanf("%f", &user1);
	
	printf("enter the operator ( +, -, *, /)");
	scanf(" %c", &oppy);
	
	printf("enter the second number : ");
	scanf("%f", &user2);
	
	if (oppy == '+') 
	{	
	printf("The sum is: %f\n", user1 + user2);
	}
	else if  (oppy == '-')
	{
		printf("the subraction is : %f\n", user1 - user2);
	}
	else if (oppy == '*')
	{
		printf("the product is : %f\n", user1 * user2);
	}
	else if (oppy == '/')
	{
		printf("the division is : %f\n", user1 / user2);
	}
	
	return 0;



	
}