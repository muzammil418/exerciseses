#include <stdio.h>

// Write a C program that prints all even numbers between 1 and 50 (inclusive).

int main()
{
	int i;
	
	//print all even between 1 and 50
	for(i = 2;  i <= 50; i+=2){
		printf("%d ", i);
	}
	
	return 0;
}