#include <stdio.h>

//100. Sort Array Ascending
//Write a program in C to sort elements of an array in ascending order.

void swap(int arr, int i, int j){
    int temp1;
    temp1 = arr[i];
    arr[i] = arr[j];
    arr[j] = temp1;
}    

int main() {
    int n = 0;
	int temp;

    printf("Input the size of array : ");
    scanf("%d", &n);

	int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
//[10,20,10,50,6]
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr, i, j);
            }
        }
    }

    printf("Elements of array in sorted ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");

    return 0;
}
