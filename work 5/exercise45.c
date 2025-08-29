#include <stdio.h>

//Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.

int main()
{
	//data types
	int p = 0, q = 0;
	int num = 1;
	int i;
	
	//take input
	printf("Input number of lines:");
	scanf("%d", &p);
	
	printf("Number of characters in a line:");
	scanf("%d", &q);
	
	//loop or statements
	for(i = 1;i <= p; i += 1){
		for(int j = 1; j <= q; j += 1){
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
	
	return 0;
}