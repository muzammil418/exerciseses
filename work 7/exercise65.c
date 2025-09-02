#include <stdio.h>

//Write a C program that takes some integer values from the user and prints a histogram.

int main()
{
	int num_of_bar = 0;
	int values[11];
	
	printf("Input number of histogram bar (Maximum 10): ");
	scanf("%d", &num_of_bar);
	
	for (int i = 0;i < num_of_bar; i++){
		scanf("%d", &values[i]);
	}
	 for (int i = 0;i < num_of_bar;i++){
		for (int j = 0; j < values[i]; j++){
			printf("#");
		}
		printf("\n");
	 }
	 
	 return 0;
}