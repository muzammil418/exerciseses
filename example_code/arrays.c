#include <stdio.h>

/*
Example program for Arrays is C
*/

int main(){
	/*
	The compiler creates a variable called myNum and stores it in memory. It also remembers the address of the RAM, and gets it automatically whenever the programer asks for 'myNum'
	*/
	int myNum = 4;
	
	/*
	An array is a collection of the given data type stored in a sequence in memory. For example, the programmer wants 5 contineous spaces in memory => then they will create an array of length 5
	
	The square bracket syntax is used to tell the compiler that an array is requested
	
	Syntax:
	data_type array_name[SIZE]; // only declare
	data_type array_name[SIZE] = {A,B,C}; // declare & initialize
	
	NOTE: Counting ALWAYS starts from 0
	
	Array name is actually a pointer
	
	A pointer is a variable who's value is the address of another memory location
	
	& operator is called "address of" operator. It gets the memory address of the variable. So &tmp means "address of the variable named tmp".
	
	Don't make the same mistake as ME and use curly brackets when initalizing arrays {}.
	
	Strings are actually array of chars IFFFF its last element is the NULL character. NULL characer is written as '\0' (just like the newline character '\n')
	
	Read the array tutorial here:
	https://www.w3schools.com/c/c_arrays.php
	*/
	
	int highScore[5] = {11,12,13,14,15}; // indexs: 0,1,2,3,4
	
	// Strings are an array of chars where last element is NULL character
	char myStr[] = "Hello"; // compiler auto makes string
	
	// Manually make a string
	char myOwnStr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	
	printf("All highscores\n");
	
	highScore[0] = 99; //auto type conversion for compatible types
	// highScore[1] = 22;
	// highScore[2] = 33;
	// highScore[3] = 44;
	// highScore[4] = 55;
	
	// Headset gone -- 1 min
	for(int i=0; i<5; i+=1){
		printf("%f\n", highScore[i]);
	}
	
	// Print like a string, because it IS A string
	printf("%s\n", myOwnStr);
	
	printf("Program will exit now!\n");
	return 0;
}