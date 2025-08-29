#include <stdio.h>

int main()
{
	//Write a C program to calculate the value of S where S = 1/1 + 3/2 + 5/4 + 7/8.
	int n,i;
	float sum = 0;
	float numeriter = 1;
	float denomeriter = 1;
	
	//take the input
	printf("enter the number:");
	scanf("%d", &n);
	
	//its very complicated
	for(i = 1;i <= n; i++){
		sum += (numeriter / denomeriter);
		numeriter += 2;
		denomeriter *= 2;
	}
	
	//print output
	printf("Value of series: %.2f\n", sum);
	
	return 0;
}
