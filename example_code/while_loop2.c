#include <stdio.h>

/*
Example code for using while loop

Syntax:

while(conditional <- boolean equation){
	//statements;
}

While loops repeate as long as the condition remains true

Quote:
"Always code as if the guy who ends up maintaining your code will be a violent psychopath who knows where you live"
*/

int main(){
	// Print table of 2 till x10
	int n = 11;
	int count = 1;
	
	while(count < n){
		printf("2 x %d = %d\n", count, 2*count);
		count = count + 1; // count is 3
		
		if(count == 3){
			// toy example to show usage of break keywork in loops
			break;
		}
	}
	
	printf("Last value of count was: %d\n", count);
	
	/*
	Output:
	2 x 1 = 2\n
	2 x 2 = 4\n
	Last value of count was: 3\n
	*/
	
	return 0;
}