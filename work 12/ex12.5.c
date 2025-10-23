#include <stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("numbers.txt", "w");
	
	//condition check if its open or not
	if (fp == NULL){
		printf("Error: Could not open file!\n");
		 return 1; // Exit program if file didn't open
	}
	
	for(int i = 0;i <= 5; i++){
		fprintf(fp, "%d \n", i * 10);//// Write numbers 10, 20, 30, 40, 50
	}
	
	fclose(fp);
	printf("Numbers written!\n");
	
	//file reopen in reade mode
	fp = fopen("numbers.txt", "r");
	int num;
	
	//condition check if its open or not
	if (fp == NULL){
		printf("Error: Could not open file!\n");
		 return 1; // Exit program if file didn't open
	}
	
	
	//print file data
	while(fscanf(fp, "%d", &num) != EOF){
		printf("%d ", num);
	}
	
	printf("\n");
	fclose(fp);
	
	return 0;
}