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
	// Real code -- Program to print i till N (=5)
	// i goes from 0 to N-1
	// the loop repeats the block N times in total
	int n = 10;
	int loop_a_counter = 0;
	int mm = 0;
	
	// Nested loop
	for(int i=0; i<n; i=i+1){ // Outer Loop-A
	
		for(int j=0; j<n; j+=1){ // Inner Loop-B
			printf("%d\n", mm);
			mm = mm + 1;
		}
		
		loop_a_counter += 1;
	} // End of Loop-A
	
	/*
	Loop A runs 10 times
	Loop B runs 10 times in one cycle
		-> But runs 100 times over all
	*/
	
	printf("Total times: %d\n", mm); // mm will be 100
	
	return 0;
}