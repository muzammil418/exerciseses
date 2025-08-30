#include <stdio.h>

// Example: Writing multi-line string in C

int main()
{
	char myStr[] = "This is\n"
				   "A multi line\n"
				   "string\n";
				   
	char myStr2[] = "Another way\nTo write\n mutliple lines";
	
	printf("%s", myStr);
	
	printf("***\n");
	
	printf("%s", myStr2);
	
	return 0;
}