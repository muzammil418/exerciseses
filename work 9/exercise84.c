#include <stdio.h>

int main()
{
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2];
    int arr3[(size1 < size2) ? size1 : size2];
    int count = 0;

    printf("Enter %d elements of first array:\n", size1);
    for(int i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements of second array:\n", size2);
    for(int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                arr3[count] = arr1[i];
                count++;
                break;
            }
        }
    }

    printf("Intersection: ");
    for(int i = 0; i < count; i++){
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
