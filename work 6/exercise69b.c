#include <stdio.h>

//Update the program in  exercise 59a such that:

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