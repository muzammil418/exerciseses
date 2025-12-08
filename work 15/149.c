#include <stdio.h>

/*
Write a program in C to return only the unique rows from a given binary matrix.
*/

int main() {
	int arr[50][50];
	int row, col;
	
	printf("enter the size of the row: ");
	scanf("%d", &row);
	
	printf("enter the size of the col: ");
	scanf("%d", &col);
	
	printf("enter the binary matrix: ");
	for(int i = 0;i < row;i++){
		for(int j = 0; j< col;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("The unique rows of the given array are : \n");
	for(int i = 0;i < row;i++){
		int duplicate = 0;
		
		for(int j = 0;j < i;i++){
			int same = 1;
			for(int k =0; k < col;k++){
				if(arr[i][k] != arr[j][k]){
					same = 0;
					break;
				}
			} 
			if(same == 1){
				duplicate = 1;
				break;
			}
		}
		if(duplicate == 0){
			for(int j = 0;j < col;j++){
				printf("%d ",arr[i][j])l; 
			} 
			printf("\n");
		}
	} 
	
	
	
	
	
	return 0;
}