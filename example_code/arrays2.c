#include <stdio.h>
#include <string.h>

/*
Example program: Strings
*/

int main(){
	//length 0 => 0th position is '\0'
	//mystr is the address of the starting location of the mystr[] string
	char mystr[10] = "apple"; //<- compiler shorthand to make str
	
	// Print the length of mystr
	printf("%d\n", strlen(mystr));
	
	//scanf("%s", &mystr); // scanf(string_format, pointer_of_var);
	
	
	printf("Address: %d\n", mystr);
	
	//printf("Reverse str: %s\n", strrev(mystr));
	
	/*
	Goal: Print reverse the string => "abc" is printed as "cba"
	
	Logic:
	Start printing characters from opposite side
	
	*/
	
	for(int i=strlen(mystr)-1; i>-1; i--){
		printf("%c", mystr[i]);
	}
	
	printf("\n");
	
	printf("Program will exit now!\n");
	
	return 0;
}