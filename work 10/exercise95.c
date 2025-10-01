#include <stdio.h>

#define SIZE 6

//95. Swap First and Last in Array
//Write a C program to create a new array by swapping the first and last elements of a given array of integers whose length is at least 1.

void printArray(int Arr[], int size) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d", Arr[i]);
        if (i < SIZE - 1) {
            printf(", ");
        }
    }

}

int main() {
    int arr[SIZE] = {
        1,
        5,
        7,
        9,
        11,
        13
    };
    int newArr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        newArr[i] = arr[i];
    }

    newArr[0] = arr[SIZE - 1];
    newArr[SIZE - 1] = arr[0];

    printf("Elements in original array are: ");
    printArray(arr, SIZE);

    printf("\nNew array, after swapping first and last elements: ");
    printArray(newArr, SIZE);
    printf("\n");

    return 0;
}