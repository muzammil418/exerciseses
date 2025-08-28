#include <stdio.h>

// Print N alphabets starting from 'a' where N is an input from the user. The output needs to be comma seperated. The maximum value of N is 26 (as there are 26 alphabets). Exit the program in case the input is invalid.


int main()
{
	int N = 0;
	
	printf("enter the number between (1 to 26):");
	scanf("%d", &N);
	
	if (N <= 26){
		for (int i = 0; i < N; i++){
			printf("%c", 'a' +i);
			printf(", ");
	}
	}
	else{
		printf("the requirment does not match\n");
	}
}