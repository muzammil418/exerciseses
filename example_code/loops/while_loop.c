#include <stdio.h>

/*
Example code for using while loop

Syntax:

while(conditional <- boolean equation){
	//statements;
}

While loops repeate as long as the condition remains true
*/

int main(){
	// Print "Hello World!" n times
	int n = 10;
	int count = 0;
	
	while(count < n){
		printf("%d) Hello World!\n", count);
		count = count + 1;
	}// End of loop
	
	/*
	0) Hello World!
	1) Hello World!
	2) Hello World!
	3) Hello World!
	4) Hello World!
	5) Hello World!
	6) Hello World!
	7) Hello World!
	8) Hello World!
	9) Hello World!
	Last value of count is: 10
	*/
	
	printf("Last value of count is: %d\n", count);
	
	return 0;
}