#include <stdio.h>
#include <string.h>

/*
Example program: 2D Arrays
*/

int main(){
	// 2d Arrays have M arrays with N elements each
	// Syntax:
	// data_type array_name[M][N] = { {...}, {...}, ... }
	
	// semantic => meaning behind syntax
	// int table[2] => Allocates 2 ints and makes a name called "table" that points to it
	
	/*
	Make an array which has two elements
	Each element of this array has an array of length 3
	
	In other words, make an array of 2 rows and 3 columns
	*/
	int table[2][3] = {
		{99, 98, 97}, // pos 0 --> type int* -> points to the array in the 1nd box
		{49, 48, 47} // pos 1 --> type int* -> points to the array in the 2nd box
	};
	
	printf("Address of table 2d Array: %d\n", table);
	printf("Address of table[0] 1d Array: %d\n", table[0]);
	printf("Address of table[1] 1d Array: %d\n", table[1]);
	
	// Another way to see the same effect -- Doing it semi-manually -- Just for an example
	int arr1[3] = {1,2,3};
	int arr2[3] = {4,5,6};
	
	int* arr2d[2] = { arr1, arr2 };
	
	printf("\n");
	printf("Address of arr2d 2d Array: %d\n", arr2d);
	printf("Address of arr2d[0] 1d Array: %d\n", arr2d[0]);
	printf("Address of arr2d[1] 1d Array: %d\n", arr2d[1]);
	
	printf("Value at arr2d[0][1]: %d\n", arr2d[0][1]);
	
	// Example of string arrays + Example of overwriting a string
	// Note: TCC makes all variable and array values 0 upon allocation. NULL character also has an 0 value.
	
	char mystrs[3][30] = {
		{'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'},
		"two dimentional array",
		"pointers and arrays"
	};
	
	strcpy(mystrs[0], "1234512345123451234512345123451234512345");
	
	printf("\n");
	for(int i=0; i<3; i++){
		printf("%s\n", mystrs[i]);
	}
	
	return 0;
}