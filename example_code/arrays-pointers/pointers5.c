#include <stdio.h>

int main(){
	int x = 22;
	int* ptrX = &x; // ptrX will hold the address of "x"
	int** ptrXX = &ptrX; // RHS => Address of slot ptrX, so LHS has to match the type which is pointer to a pointer => int**
	
	printf("x = %d\n", x);
	printf("&x = %d\n", ptrX);
	printf("&ptrX = %d\n", ptrXX);
	
	printf("Value of x via 'ptrXX' = %d\n", **ptrXX);
	
	return 0;
}