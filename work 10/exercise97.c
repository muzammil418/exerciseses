#include <stdio.h>
#define SIZE 9
//97. Shift Zeros to Left in Array
//Write a C program to create a new array from a given array of integers shifting all zeros to left direction.

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main()
{
	int arr1[9] = {1, 2, 0, 3, 5, 7, 0, 9, 11};
	int newarr[9];
	int j = 0;
	
	for(int i = 0; i < 9;i++){
		if (arr1[i] == 0){
			newarr[j] = 0;
			j++;
		}
	}
	
	for(int i = 0;i < 9; i++){
		if(arr1[i] != 0){
			newarr[j] = arr1[i];
			j++;
		}
	}
	
	printf("Elements in original array are: ");
    printArray(arr1, SIZE);
	
	printf("\nElements in new array are: ");
	printArray(newarr, SIZE);
	printf("\n");
	
	return 0;
}