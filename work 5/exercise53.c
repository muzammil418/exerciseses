#include <stdio.h>

int main()
{
	//Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.

	float sum = 0.0;
	
	//loop
	for(int i = 1;i <= 50; i++){
		sum += 1.0 / i;
	}
	
	printf("value of s: %.2f\n", sum);
	
	return 0;
}