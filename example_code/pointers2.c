#include <stdio.h>

#define SIZE 10
/*
Example program: Pointers -- Functions


Pre-processor directives
Example:
#define SIZE 20

The value of SIZE is simply replace before the program is sent to the compiler

Names are always written in CAPS by convention
*/

int addOne(int* ptr){
	// Add 1 to "value at" ptr and then store it in "value at" ptr.
	*ptr = *ptr + 1;
	
	return *ptr;
}

void printMyString(char* c){
	printf("%s\n", c);
}

int main(){
	int x = 22;
	int* ptrX = &x; // ptrX will hold the address of "x"
	
	char* str2 = "Hello world";
	char str[SIZE] = {'D', '1', '7', '\0'};
	
	const double pi = 3.142; // set variable tmp as constant at initialization
	const int* ptrX2 = &x; // Make a int pointer and make it constant 
		
	printf("const pi value is %f\n", pi);
	
	printf("%d\n", addOne(&x)); // 23
	printf("%d\n", x); // 23
	
	printf("%s\n", str2); // print str2
	printMyString(str);
	
	return 0;
}