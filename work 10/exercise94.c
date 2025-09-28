#include <stdio.h>

int main() {
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};
    int newArr[6];

    for (int i = 0; i < 3; i++) {
        newArr[i] = arr1[i];
    }
    for (int i = 0; i < 3; i++) {
        newArr[i + 3] = arr2[i];
    }

    printf("Elements in original array1 are: ");
    for (int i = 0; i < 3; i++) {
        printf("%d", arr1[i]);
        if (i < 2) printf(", ");
    }

    printf("\nElements in original array2 are: ");
    for (int i = 0; i < 3; i++) {
        printf("%d", arr2[i]);
        if (i < 2) printf(", ");
    }

    printf("\nNew array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d", newArr[i]);
        if (i < 5) printf(", ");
    }

    return 0;
}
