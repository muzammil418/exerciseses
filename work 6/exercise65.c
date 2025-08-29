#include <stdio.h>

/*Write a C program to read and print the elements of an array with length 7. Before printing, insert the triple of the previous position, starting from the second position.
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162*/

int main()
{
	int num_array[7] = {0};
	
	printf("Input the first number of the array: \n");
	scanf("%d", &num_array[0]);
	
	printf ("n[0] = %d\n", num_array[0]);
	
	for (int i = 1;i <= 6; i++){
		num_array[i] = num_array[i - 1]*3;
		printf ("n[%d] = %d\n", i, num_array[i]);
	}
	return 0;
}