#include <stdio.h>


int main(){
	int* ptrX = (int*)100; // Cast to int*
	
	for(int i=0; i<1000; i++){
		ptrX++;
		
		printf("%d\n", *ptrX); // value stored @ location inside ptrX
	}	
	
	return 0;
}