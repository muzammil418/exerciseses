#include <stdio.h>

//Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.


int main()
{
	int check_length_array[6] = {0};
	
	printf("Input the 5 members of the array:\n");
	for(int i = 1;i <=5;i++){
		scanf("%d", &check_length_array[i]);
	}
	for (int i = 1;i <= 5; i++){
		if(check_length_array[i] < 5){
			printf("A[%d] = %d\n", i, check_length_array[i]);
		}
		else{
			printf("requirment not match\n");
		}
	}
	return 0;
}