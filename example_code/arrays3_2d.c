#include <stdio.h>
#include <string.h>

/*
Example program: 2D Arrays
*/

int main(){
	// Static size array
	int arr1[2] = {99, 98}; // 1-d Array with 2 elements
	
	// 2d Arrays have M arrays with N elements each
	// Syntax:
	// data_type array_name[M][N] = { {...}, {...}, ... }
	int arr2[2][3] = {
		{99, 98, 97}, // pos 0 -- i like butterflies
		{49, 48, 47} // pos 1
	};
	
	// Print with known index
	printf("%d %d %d\n", arr2[0][0], arr2[0][1], arr2[0][2]);
	printf("%d %d %d\n", arr2[1][0], arr2[1][1], arr2[1][2]);
	
	/*
	Name of an array is a pointer to the first item of the array
	
	In 2d arrays, each index of the main array "points to" the starting position of the sub-array. For example for "arr2":
	
	arr2 is the pointer to the beginning of arr2
	arr[0] is the pointer to the first element of the sub-array at position 1
	arr[1] is the pointer to the first element of the sub-array at position 2
	
	///
	Array name is actually a pointer
	
	A pointer is a variable who's value is the address of another memory location
	
	& operator is called "address of" operator. It gets the memory address of the variable. So &tmp means "address of the variable named tmp".
	///
	
	For example:
	int x = 10; // means there's a variable called 'x' which has a value 10
	int* addr_x = &x; // means a pointer called 'addr_x' will store the address of the variable 'x' as "it's" value
	
	*addr_x => When asterisk * is used with a variable, it's called "value of" operator. It's the compliment (opposite of) the & operator. In this case, *addr_x is to read as "value that is stored on location/pointer addr_x"
	*/
	
	/*
	Goal: Print arr2 with loop(s) while printing exactly one element at a time
	
	Logic // Pseudocode
	
	Go through each element and then print element
		=> to go through each element, we must go through each sub array
		=> then in each sub-array we go through each index
			=> then we print value at that index
	*/
	
	printf("With loop:\n");
	
	
	for(int i=0; i<2; i++){ // go through each sub array
		for(int j=0; j<3; j++){ // in each sub-array
			printf("%d ", arr2[i][j]); // go through each index
		}
		
		printf("\n");
	}
	
	printf("\nProgram will exit now!\n");
	
	return 0;
}