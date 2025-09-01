#include <stdio.h>

int main()
{
	char string[99] = "  \n  \n    \n \n \n \n";
	
	printf("enter the string:\n");
	fgets(string, sizeof(string), stdin);
	
	printf("%s", string);
}