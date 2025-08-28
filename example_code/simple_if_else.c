#include <stdio.h>
#include <stdbool.h>

int main()
{
	int myControlVariable = true;
	
	if (myControlVariable){
		printf("IF part executed!\n");
	} 
	else if(myControlVariable && myVar2){
	
	} else {
		printf("ELSE part executed!\n");
	}
	
	printf("Program will end now...\n");
	
	return 0;
}

