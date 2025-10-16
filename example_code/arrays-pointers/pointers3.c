#include <stdio.h>


int main(){
	int* foo = 10; // create a pointer-var foo which points to memory location 10
	
	printf("%d", foo); // prints the mem. address stored inside variable "foo" => prints 10
	
	printf("%d", &foo); // prints address of pointer variable "foo"
	
	/*
	prints the value stored in the mem. address stored inside foo
	
	For example, as foo points to address 10, then *foo will get the value stored in memory location 10.
	*/
	printf("%d", *foo);
	
	return 0;
}