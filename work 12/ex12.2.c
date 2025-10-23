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
	printf("file open\n");
	
	//enter data in the  file 
	fprintf(fp, "hello world\n");
	fprintf(fp, "this is my first line in a file\n");
	
	//file close
	fclose(fp);
	printf("data written successfull\n");
	printf("file close\n");
	
	return 0;
}