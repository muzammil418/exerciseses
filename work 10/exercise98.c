#include <stdio.h>

//98. Partition Array: Evens Before Odds
//Write a C program to create an array from a given array of integers shifting all even numbers before all odd numbers.


int main() {
    int arr[9] = {1, 2, 5, 3, 5, 4, 6, 9, 11};
    int newArr[9];
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
    for (int i = 0; i < 9; i++) {
        printf("%d", arr[i]);
        if (i < 8) printf(", ");
    }

    printf("\nElements in new array are: ");
    for (int i = 0; i < 9; i++) {
        printf("%d", newArr[i]);
        if (i < 8) printf(", ");
    }
	printf("\n");

    return 0;
}
