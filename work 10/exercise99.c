#include <stdio.h>

//99. Print Unique Elements
//Write a program in C to print all unique elements in an array.

int main() {
    int n = 0;
	int count = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

	int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are:\n");
    for (int i = 0; i < n; i++) {
		count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
	printf("\n");
	
    return 0;
}
