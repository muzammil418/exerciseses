#include <stdio.h>

/*
Write a program in C to check whether an array is a subset of another array.
*/

int main() {
    int arr1[50], arr2[50];
    int n1, n2;

    printf("enter the size of first array: ");
    scanf("%d", &n1);

    printf("enter the elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter the size of second array: ");
    scanf("%d", &n2);

    printf("enter the elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int is_subset = 1;

    for (int i = 0; i < n2; i++) {
        int found = 0;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            is_subset = 0;
            break;
        }
    }

    if (is_subset == 1) {
        printf("the second array is the subset of first array.\n");
    } else {
        printf("the second array is not the subset of first array.\n");
    }

    return 0;
}
