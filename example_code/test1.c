#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comment:
// Function: Add two whole numbers and then +1
int hello_kitty(int a, int b){
	int result = a + b;
	
	return result+1;
}

// Print a big line
void print_line(void){
	printf("\n************************************\n");
}

// Main function of the program
int main(void){
	int myoutput = 0;
	int tmp = 0;
	
	printf("Original Value of myoutput: %d\n", myoutput);
	print_line();
	
	printf("Hello World");
	print_line();
	
	myoutput = hello_kitty(3,3);
	
	printf("My result: %d", myoutput);
	print_line();
	
	scanf("%s", &tmp);
	printf("Output: %d\n", tmp);
	
	printf("C Version is: %ld\n", __STDC_VERSION__);
	
	printf("Len: %d\n", strlen("Hello"));
	system("pause");  
	return 0;
}