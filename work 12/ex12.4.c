#include <stdio.h>

int main() {
	FILE *fp;
	
	fp = fopen("example.txt", "a");//open file in edit mode so we can add things in it
	
	//condition check if its open or not
	if (fp == NULL){
		printf("Error: Could not open file!\n");
		 return 1; // Exit program if file didn't open
	}
	
	fprintf(fp, "addid anothere line at the end\n");
	
	fclose(fp);
	
	printf("line added succesfully\n");
	
	return 0;
}