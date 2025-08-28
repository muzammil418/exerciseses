#include <stdio.h>

/*
Example code for using FOR loop

Loop are a programming construct to repeat the code N-times

Syntax:

for(initialization; conditional; update){
	//statements;
}
*/

void print_three_nrs(int n){
	// Output:
	// n n+1 n+2 \n
	printf("%d ", n);
	printf("%d ", n+1);
	printf("%d ", n+2);
	printf("\n", n);
}

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
	*/
	int end = 14;
	
	for(int i=1; i<num_lines; i+=3){
		// Can also be done with a function
		// print_three_nrs(i);
		
		
		// Can also be done with the following
		//printf("%d %d %d\n", i, i+1, i+2);
	}
	
	printf("Last value of mm is: %d\n", mm);
	
	return 0;
}
