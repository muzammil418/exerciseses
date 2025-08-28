#include <stdio.h>
#include <stdbool.h> 


int main(){
	/*
	1. take marks as input from user
	2. if marks > 90, then A grade
		if marks > 80, then B grade
		if marks <= 80, then F	
	*/
	int marks = 5; // declare a variable called 'marks' of type 'integer'
	scanf("%d", &marks); // 77
	
	// Operators: <, >, <=, >=, !=, ==
	// All of them output a True or False
	// 0 is False, Not 0 is evaluates to True
	
	if ( marks > 90 ){
		printf("Grade: A\n");
	} else if ( marks > 80 ){
		printf("Grade: B\n");
	} else {
		printf("Grade: F\n");
	}
	
	return 0;
}