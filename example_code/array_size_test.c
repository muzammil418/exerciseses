#include <stdio.h>

int main()
{
    int n;
    int arr1[n];
    int arr2[11];
    
	printf("Enter the size of array: ");
    scanf("%d", &n); // This value is read at runtime
	
    printf("size int: %ld\narr1 size: %ld\narr2 size: %ld\n", sizeof(int), sizeof(arr1), sizeof(arr2));

    return 0;
}