#include <stdio.h>

int main() {
    int arr1[10][10];
    int arr2[10][10];
    int row, column;
    
    // size
    printf("enter the row size of matrix: ");
    scanf("%d", &row);
    
    printf("enter the column size of matrix: ");
    scanf("%d", &column);
    
    // input
    printf("input elements in the matrix : \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    // transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr2[j][i] = arr1[i][j];
        }
    }
    
    // printing original
    printf("\nthe matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    // printing transpose
    printf("\nthe transpose is:\n");
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
