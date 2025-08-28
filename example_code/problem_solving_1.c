#include <stdio.h>
#include <stdbool.h> 

/*
Break a big problem into smaller sub-problems
Solve sub-problems one by one

Ex: Binary number 1011
*/

int main(){
	char bin_num[] = "1011"; // compiler auto converts to Char Array terminated by null character (\0)
	
	int bin_part = 0;
	int pow_part = 0;
	int length = 4;
	int dec_nr = 0;
	
	// "1011" represented as array: {'1', '0', '1', '1', '\0'}
	
	for(int i=0; i<length; i++){
		// Want => 3 2 1 0
		// i = 0 1 2 3
		// => length-1-i => 3 2 1 0
		bin_part = bin_num[i]-48;
		
		pow_part = pow(2,length-1-i);
		dec_nr += bin_part * pow_part;
		
		
		printf("%f\n", dec_nr);
	}
	
	printf("\n");
	
	return 0;
}