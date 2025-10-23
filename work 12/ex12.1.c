#include <stdio.h>

int main(){
	//create a file 
	FILE *fp;
	
	//open the file
	fp = fopen("example.txt", "w");
	
	//condition check if its open or not
	if (fp == NULL){
		printf("Error: Could not open file!\n");
		 return 1; // Exit program if file didn't open
	}
	
	//print file open
	printf("file opened successfully\n");
	fclose(fp);
	printf("file close successfully\n");
	
	return 0;
}