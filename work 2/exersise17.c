#include <stdio.h>
#include <stdlib.h>

int main()
{
	//data type
	int oppy;
	int Hours,Minutes,Seconds,Remaining;

	//take input 	
	printf("give the value;\n");
	scanf("%d", &oppy);
	
	//calculation
	Hours = oppy / 3600; //1 hour

	Remaining = oppy % 3600; 

	Minutes =  Remaining / 60; 

	Seconds = Remaining % 60; 

// output
	printf("H:M:S %d %d %d\n", Hours, Minutes, Seconds); 
	
	return 0;
}