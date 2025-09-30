#include <stdio.h>

// Function to calculate sum of array
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to print array
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
    int arr1[3] = {10, 20, -30};
    int arr2[3] = {10, 20, 30};

    printf("Elements in original array are: ");
    printArray(arr1, 3);
    printf("Elements in original array are: ");
    printArray(arr2, 3);

    int sum1 = arraySum(arr1, 3);
    int sum2 = arraySum(arr2, 3);

    printf("The array which has the largest sum: ");
    if (sum1 > sum2) {
        printArray(arr1, 3);
    } else {
        printArray(arr2, 3);
    }

    return 0;
}
