#include <stdio.h>
#include <stdbool.h> 
#include <math.h>

/*
Break a big problem into smaller sub-problems
Solve sub-problems one by one

Ex: Binary number 1011
*/

int main(){
	// Output: 8 4 2 1
	// Output: 2^3 2^2 2^1 2^0
	
	for(int i=3; i>-1; i--){
		printf("%d\n", (int)pow(2,i));
	}
	
	printf("\n");
	
	return 0;
}