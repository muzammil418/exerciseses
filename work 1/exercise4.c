#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20];
	char Dob[20];
	int mobile;
	printf("enter your name:");
	scanf("%s" , name);
	
	printf("enter your Dob:");
	scanf("%s" , Dob);
	
	printf("enter your phone number");
	scanf("%d" , &mobile);
	
	printf("Name :%s \n", name);
	
	printf("DOB :%s \n", Dob);
	
	printf("phone number :%d \n", mobile);
	return 0;
}