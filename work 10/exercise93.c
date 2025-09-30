#include <stdio.h>
#define SIZE 6  

//93. Extract Middle Elements from Even Array
//Write a C program to create an array taking two middle elements from a given array of integers of length even.

int main() {
    int arr[SIZE] = {1, 5, 7, 9, 11, 13};
    int mid1 = SIZE / 2 - 1;
    int mid2 = SIZE / 2;

    int newArr[2] = {arr[mid1], arr[mid2]};

    printf("Elements in original array are: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d", arr[i]);
        if (i < SIZE - 1) {
            printf(", ");
        }
    }

    printf("\nNew array: ");
    for (int i = 0; i < 2; i++) {
        printf("%d", newArr[i]);
        if (i < 1) {
            printf(", ");
        }
    }
	printf("\n");

    return 0;
}
