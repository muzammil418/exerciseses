#include <stdio.h>

//Given two variables a and b, write code so that the value of b is stored in a and the value of a is stored in b when the program ends.

//You can use a 3rd variable to temporarily store values.

int main(){
	int a = 3;
	int b = 5;
	int tmp = 0; // variable to remember value, if needed
	
	printf("a = %d, b = %d \n", a, b); // Output a = 3, b = 5
	
	// Logic to swap variable values of a and b
	tmp = a;//3 tmp = 3
	a = b;//3 a = b 5
	b = tmp;//3
	
	printf("a = %d, b = %d \n", a,b ); // Output a = 5, b = 3
	
	return 0;
}
/*
tmp = 3
a = 5
b = 5
*/