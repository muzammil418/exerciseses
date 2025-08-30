#include <stdio.h>
#include <stdlib.h>

int main()
{
	//data types
	char employee[10];
	int wor_hor;
	float salaryperhour = 15000;
	float calculator;
	
	//input
	printf("enter the employee id:");
	scanf("%s", employee);
	
	printf("enter the working hours:");
	scanf("%d", &wor_hor);
	
	//calculation
	calculator = wor_hor*salaryperhour;
	
	//output
	printf("employee id:%s\n", employee);
	printf("salary:%.2f\n", calculator);
	
	return 0;
}
