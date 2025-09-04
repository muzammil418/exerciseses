#include <stdio.h>

//Write a C program that accepts two integer values and calculates the sum of all even values between them.

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	
	printf("Input two numbers (integer values):");
	scanf("%d\n", &num1);
	scanf("%d", &num2);
	
	for(int i = num1; i <= num2; i++){
		if(i % 2 == 0){
			sum += i;
		}
	}
	
	printf("Sum of all even values between %d and %d\n", num1, num2);
    printf("%d\n", sum);

    return 0;
}