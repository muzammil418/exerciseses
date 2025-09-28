#include <stdio.h>

int main()
{
	int arr1[9] = {1, 2, 0, 3, 5, 7, 0, 9, 11};
	int newarr[9];
	int j = 0;
	
	for(int i = 0; i < 9;i++){
		if (arr1[i] == 0){
			newarr[j] = 0;
			j++;
		}
	}
	
	for(int i = 0;i < 9; i++){
		if(arr1[i] != 0){
			newarr[j] = arr1[i];
			j++;
		}
	}
	
	printf("Elements in original array are: ");
	for(int i = 0;i < 9;i++){
		printf("%d", arr1[i]);
		if(i < 9 - 1){
			printf(", ");
		}
	}
	
	printf("\nElements in new array are: ");
	for(int i = 0;i < 9; i++){
		printf("%d", newarr[i]);
		if(i < 9 - 1){
			printf(", ");
		}
	}
	printf("\n");
	
	return 0;
}