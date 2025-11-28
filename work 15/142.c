#include <stdio.h>

/*
Write a program in C for adding two matrices of the same size.
*/

int main() {
    int arr1[5][5];
    int arr2[5][5];
    int arr3[5][5];
    int n;
    
    printf("input the size of the square matrix (less than 5): ");
    scanf("%d", &n);
    
    printf("input elements in the first matrix : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("input elements in the second matrix : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("the first matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("the second matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    printf("the third matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
