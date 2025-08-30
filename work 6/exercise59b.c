#include <stdio.h>
//#include <bool.h>

//Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.

//Update the program in  exercise 59a such that:
/*
 # # # # # # # # # #
 #                 #
 #                 #
 #                 #
 #                 #
 #                 #
 #                 #
 #                 #
 #                 #
 # # # # # # # # # #
 */

int main()
{
	int square_size = 0;
	//bool is_side = false;
	
	printf("enter the square size:\n");
	scanf("%d", &square_size);
	
	for (int i = 0;i < square_size; i++){
		for (int j = 0; j < square_size; j++){
			if (j == 0 || j == square_size - 1 || i == 0 || i == square_size - 1){
				printf(" #");
			}
			else{
				printf("  ");
			}				
		}
		printf("\n");
	}

	return 0;     
}