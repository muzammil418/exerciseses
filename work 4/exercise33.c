#include <stdio.h>
#include <stdlib.h>

float calculater(float user1, float user2, char oppy){
	if (oppy == '+') 
	{	
		return user1 + user2;
	}
	else if  (oppy == '-')
	{
		return user1 - user2;
	}
	else if (oppy == '*')
	{
		return user1 * user2;
	}
	else if (oppy == '/')
	{
		return user1 / user2;
	}
}

int main()
{
	float u1,u2;
	char o;
 
	printf("enter the first number\n");
	scanf("%f", &u1);
	
	printf("enter the operator\n");
	scanf(" %c", &o);
	
	printf("enter the second nuber\n");
	scanf("%f", &u2);
	
	printf("the answer is %.3f\n", calculater(u1, u2, o ));
	
	return 0;
	
}