// Command line arguments example from geeksforgeeks.org
// C program named mainreturn.c to demonstrate the working
// of command line arguement
#include <stdio.h>
#include <stdlib.h>

// defining main with arguments
int main(int argc, char* argv[])
{
	printf("Program to add two numbers\n");
	
	if(argc != 3){
		printf("Only need two arguments\n");
		printf("Usage: ./cmd_line_args.exe <num1> <num2>\n");
		exit(-1);
	}
	
	int result = atoi(argv[1]) + atoi(argv[2]);
	
	printf("%s+%s = %d", argv[1], argv[2], result);
	
	// To print all arguments
	
    printf("You have entered %d arguments:\n", argc);

    for (int i=0; i<argc; i++) {
        printf("%s\n", argv[i]);
    }
	
    return 0;
}