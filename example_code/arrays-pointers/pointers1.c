#include <stdio.h>

/*
Example program: Pointers Basics

A pointer is a special variable that holds the memory address of another variable

Pointers are declared like normal variables as follows:

int* ptrInt;
double* ptrRealnr;
char* charPtr;

& is called the "address of" operator. When applied to a pointer variable, it extacts the memory address of the variable and returns it.

* (when used before a pointer variable) is the "value at" operator. It extracts the value stored at the address inside the pointer.

*/

int main(){
	int x = 22;
	int* ptrX = &x; // ptrX will hold the address of "x"
	
	char c = 'A';
	char *ptrC = &c; // address of "c"
	
	/*
	flat* ptr = &MuzammilHome; // ptr is D17
	printf("%s", MuzammilHome); // print by name
	*/
	
	printf("%d\n", x);
	printf("%d\n", *ptrX);
	
	printf("%c\n", c);
	printf("%c\n", *ptrC);
	
	return 0;
}