#include <stdio.h>
#include <stdlib.h>

int main()
{
	int user1;
	int user2;
	
	printf("enter the first product : ");
	scanf("%d", &user1);
	
	printf("enter the second product : ");
	scanf("%d", &user2);
	
	int sum = user1*user2;
	
	printf("product of two integer %d\n", sum);
	
	
	return 0;
}