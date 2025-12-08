#include <stdio.h>

int main() {
	int arr[10][10];
    int row, col;

    printf("enter number of rows: ");
    scanf("%d", &row);

    printf("enter number of columns: ");
    scanf("%d", &col);

    printf("enter matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
	
	printf("lowr triangle matrix: \n");
	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++){
			if(j <= i){
				printf("%d ", arr[i][j]);
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
	
	return 0;
}