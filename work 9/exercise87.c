#include <stdio.h>

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int temp = 0;
    temp = arr[0];
	
    printf("Elements in original array are: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");
	
    for (int i = 0; i < 3; i++) {
        arr[i] = arr[i+1];
    }
    arr[3] = temp;

    printf("Elements in new array are: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");
    return 0;
}
