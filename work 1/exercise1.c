 #include <stdio.h>

/*
**** Understanding data types in C
	
	Four basic data types in C:
	1. int --> Used for "Whole numbers" eg. ...,-3,-2,-1,0,1,2,3...
	2. float or double --> Used for "Real Number" 3.142 or 1.5
	3. char --> is for ASCII code etc...
	4. void --> means nothing -- used when no data-type applies...


**** Understanding C syntax <-- rules of C compiler OR grammar
// Syntax/Rules to 'define' a variable in C
// <data type> <space> <name of data OR variale name> = <value>;


What are data-types?
Is the type of the data -- this tells the compiler how to store the given data in memory.

What is a variable name?
Variable name is the "name of the data". It can also be called an "identifier". For example, my identifier is Ali -- or my name is Ali.
There are some rules for naming variable in C, for example variable name CAN NOT start with a number.
For example, int 5provinces = 3; will give an error

What is a placeholder?
int --> %d
float --> %f
double --> %lf
char --> %c
char[] // also called "string" --> %s

A place holder is a "holder" of "place" for the data...
*/

int main(){
	int myWholeNumber = 97; // size usually 8 bytes (windows bit size)
	char myCharVariable = 'a'; //size 1 byte
	float myRealNumber1 = 3.05;
	char myStringVariable[] = "6. My CPU speed is %f Ghz\n";
	
	printf("1. myWholeNumber value is %d \n", myWholeNumber);
	printf("2. myWholeNumber value is %c \n", myWholeNumber);
	
	printf("3. myCharVariable value is %d \n", myCharVariable);
	printf("4. myCharVariable value is %c \n", myCharVariable);
	
	printf("5. My CPU speed is %f Ghz\n", myRealNumber1);
	
	// Syntax of printf (is a function... more on this layer)
	// printf(<string>,<data to fit in the place holder>);
	// What's the syntax of scanf?
	// Same as printf! (with just an extra &)
	printf(myStringVariable, myRealNumber1);
	
	printf("7. My RAM is %d GB\n", 97);
}