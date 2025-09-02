#include <stdio.h>

//Write a C program to create and print the sequence of the following example.

int main()
{
	int b = 100;
	 for(int i = 1;i <= 51;i = i + 5){
		 printf("a=%d      b=%d\n", i,b);
		 b = b - 10;
	 }
	
}