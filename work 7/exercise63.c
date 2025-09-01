#include <stdio.h>

//Write a C program to count spaces and newlines in the following text.

int main()
{
	char string[99];
	int count_newline = 0;
	int count_tab = 0;
	int count_blanks = 0;
	
	printf("enter the string:\n");
	fgets(string, sizeof(string), stdin);
	
	for(int i = 0;string[i] != '\0';i++){
		
	if (string[i] == ' '){
		count_blanks++;
	}
	if (string[i] == '\n'){
		count_newline++;
	}
	if (string[i] == '\t'){
		count_tab++;
	}
	}
	
	printf("newlines %d\n", count_newline);
	printf("blanks %d\n", count_blanks);
	printf("count tab %d\n", count_tab);
	
	return 0;
}