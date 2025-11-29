#include <stdio.h>

/*
Write a program in C to find the sum of rows and columns of a matrix.
*/

int main() {
	int arr[10][10];
	int sum = 0;;
	int n;
	
	printf("input the size of the square matrix : ");
    scanf("%d", &n);
    
    printf("input elements in the first matrix : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
	
	printf("the matrix is : \n");
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
		printf("\n");
    }
	printf("\n");
	
	printf("The sum of rows and columns of the matrix is : \n");
	for (int i = 0; i < n; i++) {
		int sum = 0;
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
			sum += arr[i][j];
        }
		printf("- %d\n", sum);
    }
	
	for (int i = 0; i < n; i++) {
		int sum = 0;
        for (int j = 0; j < n; j++) {
			sum += arr[j][i];
        }
		printf("%d ", sum);
    }
	printf("\n");
	
	return 0;
}