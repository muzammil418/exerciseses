#include <stdio.h>

//Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".

int main()
{
	//data types
	float x;
	float y;
	
	//take input
	printf("enter the value of x:");
	scanf("%f", &x);
	
	printf("enter the value of y:");
	scanf("%f", &y);
	
	// statements or calculation
	if(y == 0){
		printf("division is not possible\n");
	}
	else {
		printf("%.1f\n", x / y);
	}
	
	return 0;
}