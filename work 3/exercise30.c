#include <stdio.h>
//Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
// Test Data :
// Input number of lines: 5

// Expected Output:
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 13 14 15 
int main()
{
	int num_lines = 5;//user input = 5
	int lol = 1;
	int i;

	// printf("enter the number of line you want to print:");
	// scanf("%d", &num);
/*
0 --(i+1)--> 1
1 --(i+3)--> 4
2 --(i+5)--> 7
3 --(i+7)--> 10
4 --(i+9)--> 13


*/
	for(i = 0;i <num_lines; i += 1){
		for(int j = 0; j < 3; j += 1){
			printf("%d ", lol);
			lol++;
		}
		printf("\n");
	}
	
	return 0;
}
