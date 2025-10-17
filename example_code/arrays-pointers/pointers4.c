#include <stdio.h>

void addOne(int* ptrX2){
	*ptrX2 = *ptrX2 + 1;
}

int main(){
	int x = 22;
	int* ptrX = &x; // ptrX will hold the address of "x"
	
	addOne(&x); // Makes value of x 23
	addOne(ptrX); // Makes value of x 24
	
	printf("%d\n", x); // 24
	
	return 0;
}