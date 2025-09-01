#include <stdio.h>

//Write a C program to print a table of all the Roman numeral equivalents of decimal numbers in the range 1 to 50.

void print_roman_num(int num){
	
	while(num >= 10){
		printf("X");
		num -=10;
	}
	while(num >= 9){
		printf("IX");
		num -=9;
	}
	while(num >= 5){
		printf("V");
		num -=5;
	}
	while(num >= 4){
		printf("IV");
		num -=4;
	}
	while(num >= 1){
		printf("I");
		num -=1;
	}
}

int main()
{
	printf("Decimal  Roman\n");
	printf("number  numeral\n");
	printf("-------------------\n");
	
	for(int i = 1;i <= 20;i++){
		printf("%d        ", i);
		print_roman_num(i);
		printf("\n");
	}
	return 0;
}