#include <stdio.h>

//Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.

int main()
{
	int square_size = 0;
	
	printf("enter the square size:\n");
	scanf("%d", &square_size);
	
	for (int i = 1;i < square_size; i++){
		for (int j = 1; j < square_size; j++){
			printf(" #");
		}
		printf("\n");
	}
	
	return 0;
}