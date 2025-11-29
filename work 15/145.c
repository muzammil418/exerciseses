#include <stdio.h>

/*
Write a program in C to find the sum of the left diagonals of a matrix.
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
	
	for(int i = 0;i < n;i++){
		sum += arr[i][n - 1 - i];
	}
	
	printf("Addition of the left Diagonal elements is Addition of the left Diagonal elements is: %d\n", sum);
	
	return 0;
}