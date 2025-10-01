#include <stdio.h>
#define SIZE 9

//98. Partition Array: Evens Before Odds
//Write a C program to create an array from a given array of integers shifting all even numbers before all odd numbers.

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int arr[SIZE] = {1, 2, 5, 3, 5, 4, 6, 9, 11};
    int newArr[SIZE];
    int j = 0;

    for (int i = 0; i < 9; i++) {
        if (arr[i] % 2 == 0) {
            newArr[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (arr[i] % 2 != 0) {
            newArr[j] = arr[i];
            j++;
        }
    }

    printf("Elements in original array are: ");
    printArray(arr, SIZE);
    
    printf("\nElements in new array are: ");
    printArray(newArr, SIZE);
	printf("\n");

    return 0;
}
