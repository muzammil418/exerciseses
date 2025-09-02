#include <stdio.h>
#include <stdlib.h>

//Write a C program that accepts some text from the user and prints each word of that text on a separate line.

int main()
{
	char string[500];
	
	printf("enter the string:\n");
	fgets(string, sizeof(string), stdin);
	
	for (int i = 0;string[i] != '\0'; i++){
		if (string[i] == ' '){
			printf("\n");
		}
		else{
			printf("%c", string[i]);
		}
	}
	
	return 0;
}