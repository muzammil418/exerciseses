#include <stdio.h>

//91. New Array from First and Last Elements
//Write a C program to create a new array taking the first and last elements of a given array of integers and length one or more.

int main()
{
    int n_of_arr = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n_of_arr);

    int arr[n_of_arr];
    printf("Enter %d elements:\n", n_of_arr);
    for (int i = 0; i < n_of_arr; i++) {
        scanf("%d", &arr[i]);
    }

    int new_arr[2];
    new_arr[0] = arr[0];
    new_arr[1] = arr[n_of_arr - 1];

    printf("Elements in original array are: ");
    for (int i = 0; i < n_of_arr; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nElements in new array are: %d, %d\n", new_arr[0], new_arr[1]);

    return 0;
}
