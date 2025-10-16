#include <stdio.h>

/*
Example code for using FOR loop

Loop are a programming construct to repeat the code N-times

Syntax:

for(initialization; conditional; update){
	//statements;
}
*/

int main(){
	int num_lines = 5;
	int mm = 1;
	
	/*
	Expected Output:
	1 2 3
	4 5 6
	7 8 9
	10 11 12
	13 14 15 
	*/
	
	/*
	Current Output:
	1 2 3 
	4 5 6 
	7 8 9 
	10 11 12
	13 14 15 
	Last value of mm is: 16
	
	*/
	for(int i=0; i<num_lines; i += 1){ // Outer 5 times
		//printf("Line number: %d ", i+1);
		
		for(int j=0; j<3; j+=1){ // Inner 3 times
			printf("%d ", mm); // mm is 6
			mm = mm + 1;
		}
		
		printf("\n");
	}
	
	printf("Last value of mm is: %d\n", mm);
	
	return 0;
}
