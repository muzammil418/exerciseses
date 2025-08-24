#include <stdio.h>
#include <stdlib.h>

int main()
{
	int user1;
	int user2;
	
	printf("enter the first integer : ");
	scanf("%d", &user1);
	
	printf("enter the second integer : ");
	scanf("%d", &user2);
	
	int sum = user1+user2;
	
	printf("sum of the integer %d\n", sum);
	
	
	return 0;
}