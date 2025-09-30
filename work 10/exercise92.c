#include <stdio.h>

//92. Compare Sum of Two Arrays
//Write a C program to compute the sum of the two given arrays of integers, length 3 and find the array that has the largest sum.

int main()
{
    int arr1[3] = {10, 20, -30};
    int arr2[3] = {10, 20, 30};
    int arr1_sum = 0;
    int arr2_sum = 0;

    printf("Elements in original array are: ");
    for (int i = 0; i < 3; i++) {
        printf("%d", arr1[i]);
        if (i < 2) {
            printf(", ");
        }
        arr1_sum += arr1[i];
    }

    printf("\nElements in original array are: ");
    for (int i = 0; i < 3; i++) {
        printf("%d", arr2[i]);
        if (i < 2) {
            printf(", ");
        }
        arr2_sum += arr2[i];
    }

    printf("\n");
    if (arr1_sum > arr2_sum) {
        printf("The array which has the largest sum: ");
        for (int i = 0; i < 3; i++) {
            printf("%d", arr1[i]);
            if (i < 2) {
                printf(", ");
            }
        }
		printf("\n");
    } else {
        printf("The array which has the largest sum: ");
        for (int i = 0; i < 3; i++) {
            printf("%d", arr2[i]);
            if (i < 2) {
                printf(", ");
            }
        }
		printf("\n");
    }

    return 0;
}
