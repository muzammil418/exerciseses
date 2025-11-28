#include <stdio.h>

/*
Write a program in C for a 2D array of size 3x3 and print the matrix.
*/

int main() {
	int arr[3][3];
	
	//input
	printf("input elements in the matrix :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
	
	//output
	for(int i = 0;i < 3;i++){
		for (int j = 0;j < 3;i++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}