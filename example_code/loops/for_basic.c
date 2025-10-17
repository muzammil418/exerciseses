#include <stdio.h>

/*
Example code for using FOR loop

Loop are a programming construct to repeat the code N-times

Syntax:

for(initialization; conditional; update){
	//statements;
}
*/

int is_even(int num){
	// return 0 if number is odd, else 1
	return !(num%2);
}


int main(){
	int n = 5;
	
	// Print even numbers till n
	for(int i=0; i<n; i=i+1){
		if( is_even(i) ){
			printf("%d\n", i);
		}
	}
	
	return 0;
}