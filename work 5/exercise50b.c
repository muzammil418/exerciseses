#include <stdio.h>

int main(){
	int a = 3;
	int b = 5;
	 // variable to remember value, if needed
	
	printf("a = %d, b = %d \n", a, b); // Output a = 3, b = 5
	
	// Logic to swap variable values of a and b
	
	a = a + b;//3+5 = 8
	b = a - b;//8 - 5 = 3
	a = a - b;// 8 - 3 = 5
	
	printf("a = %d, b = %d \n", a, b); // Output a = 5, b = 3
	
	return 0;
}
