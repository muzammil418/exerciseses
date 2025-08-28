#include <stdio.h>

void print_alphabets(int N)
{
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

int main()
{
	int num_of_alphabets = 0;
	
	printf("enter the number between (1 to 26):");
	scanf("%d", &num_of_alphabets);
	
	print_alphabets(num_of_alphabets);
	
	return 0;
}