#include <stdio.h>

int main(){
	FILE *fp;
	char line[100];//store the data
	
	fp = fopen("example.txt", "r");//open file in the reade mode by using the "r"
	
	//condition check if its open or not
	if (fp == NULL){
		printf("Error: Could not open file!\n");
		 return 1; // Exit program if file didn't open
	}
	
	//create a while loop to print the data
	while(fgets(line, sizeof(line), fp)){
		printf("%s", line);
	}
	
	fclose(fp);
	
	return 0;
}