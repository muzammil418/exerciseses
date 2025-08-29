#include <stdio.h>

// Generate commands to fix file names in bulk

int main()
{
	// Sample output: git mv ./exercise52c ./exercise41.c
	for(int i=52; i<=59; i++){
		printf("git mv .\\exercise%d.c .\\exercise%d.c\n", i, i-11);
	}
	
	return 0;
}