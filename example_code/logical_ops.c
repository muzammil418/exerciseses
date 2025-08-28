#include <stdio.h>
#include <stdbool.h>  // For boolean data type (bool, true, false)

/*

**AND Operator (&&)**

| A | B | A && B |
| - | - | ------ |
| T | T | T      |
| T | F | F      |
| F | T | F      |
| F | F | F      |

**OR Operator (||)**

| A | B | A || B |
| - | - | ------ |
| T | T | T      |
| T | F | T      |
| F | T | T      |
| F | F | F      |

In these tables:

* T represents True
* F represents False
* A and B are the input values
* A && B and A || B are the output values of the AND and OR operations, respectively

*/



int main(){	
	int x = 5;
	int value = 1;
	
	if(0){
		printf("1. This statements will never be printed\n");
	}
	
	if(true){
		printf("1. This statement will always be printed\n");
	}
	
	if(value){
		printf("1. This statement will be printed if value is true\n");
	}
	
	// Controling program flow using logic
	if ( ( x % 2 == 0 ) ){ // false as x=5 is an odd number
		printf("Check.");
	} else if ( (x < 0) || ( x % 2 == 1 ) ){ // true as x is odd number and (False OR True) equals True
		printf("Check.\n");
	} else {
		printf("Error.\n");
	}
	
	// Result of a relational operator is 1 or 0 (indicating True or False)
	if(1<0){ // Will result in false
		printf("2. This statements will never be printed\n");
	}
	
	// Not changes true to false, and false to true
	if(!false){
		printf("2. This statement will always be printed\n");
	}
	
	if( !( x % 2 == 0 ) ){ // If x is NOT even
		printf("x is an odd number\n");
	}
	
	if ( x < 0 && false ){ // Maybe a useful way, if you want to debug if statements
		printf("3. This statements will never be printed\n");
	}
	
	return 0;
}