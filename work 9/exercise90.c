#include <stdio.h>

//90. Extract Middle Elements from Two Arrays
//Write a C program to create a new array containing the middle elements from the two given arrays of integers, each of length 5.

int main()
{
    int arr1[5] = {10, 20, -30, -40, 30};
    int arr2[5] = {10, 20, 30, 40, 30};
    int newarr[2];

    newarr[0] = arr1[2];
    newarr[1] = arr2[2];

    printf("Elements in original array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\nElements in new array are: ");
    for (int i = 0; i < 2; i++) {
        printf("%d ", newarr[i]);
    }
	printf("\n");

    return 0;
}

