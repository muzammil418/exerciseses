#include <stdio.h>

//Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.


int main()
{
	int reverse_array[6] = {0};
	int temp = 0;
	
	printf("Input the 5 members of the array:\n");
	for(int i = 1;i <=5;i++){
		scanf("%d", &reverse_array[i]);
	}
	
	for (int i = 0;i < 5; i++){
		temp = reverse_array[i];
		reverse_array[i] = reverse_array[5 - 1 - i];
		reverse_array[5 - 1 - i] = temp;
		printf("array_n[%d] = %d\n", i, reverse_array[i]);
	}
	return 0;
//Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.


}