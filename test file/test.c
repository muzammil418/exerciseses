#include <stdio.h>
#include <string.h>
/*
i want to count the lenght of string the lenght of string is 3
// 974

*/
int main()
{
	int i = 0;
	int lenght = 0;
	char mystring[99] = "The quick brown";
	int count = 0;
	
	for (int i = 0; mystring[i] != '\0'; i++){
		count++;
	}
	printf("%d\n", count);
	return 0;
}