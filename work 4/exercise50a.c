#include <stdio.h>
#include <string.h>

int main()
{
	char store[100];
	char store2[] = "hello";
	
	printf("enter the password:");
	scanf("%s", store);
	
	if( strcmp(store,store2) == 0) 
	{
		printf("hello sir kaam muskil tha \n");
	}
	else 
	{
		printf("Access denied\n");
	}

	return 0;
	
}