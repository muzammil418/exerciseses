#include <stdio.h>

//Write a program to take the length of square as input from the user and draw it using # character in the output.


int main()
{
	//store data types
	int n, i;
	
	//take input
	printf("enter the number:");
	scanf("%d", &n);
	
	//loop 
	for(i = 1; i <= n; i++){
		for(int j = 1;j <= n;j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}