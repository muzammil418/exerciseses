#include <stdio.h>

//90. Extract Middle Elements from Two Arrays
//Write a C program to create a new array containing the middle elements from the two given arrays of integers, each of length 5.

// Function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to get middle element
int getMiddle(int arr[], int size) {
    int mid = size / 2;   
    return arr[mid];
}

int main() {
    int arr1[5] = {10, 20, -30, -40, 30};
    int arr2[5] = {10, 20, 30, 40, 30};
    int newarr[2];

    newarr[0] = getMiddle(arr1, 5);
    newarr[1] = getMiddle(arr2, 5);

    printf("Elements in first array:\n");
    printArray(arr1, 5);

    printf("Elements in second array:\n");
    printArray(arr2, 5);

    printf("Elements in new array are:\n");
    printArray(newarr, 2);

    return 0;
}
