#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0, j = 4, temp;

    printf("Elements in original array are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    printf("\nElements in reverse array are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
