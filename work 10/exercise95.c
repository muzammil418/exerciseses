#include <stdio.h>
#define size 6

//95. Swap First and Last in Array
//Write a C program to create a new array by swapping the first and last elements of a given array of integers whose length is at least 1.

int main() {
    int arr[size] = {1, 5, 7, 9, 11, 13};
    int newArr[size];

    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    newArr[0] = arr[size - 1];
    newArr[size - 1] = arr[0];

    printf("Elements in original array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
			printf(", ");
		}
    }

    printf("\nNew array, after swapping first and last elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d", newArr[i]);
        if (i < size - 1) {
			printf(", ");
		}
    }
	printf("\n");
	
    return 0;
}
