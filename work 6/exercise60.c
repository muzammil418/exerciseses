#include <stdio.h>

int main()
{
	int num, reversed = 0;
	int original;
	
	printf("enter the input:");
	scanf("%d", &num);
	
	original = num;
	
	while (num != 0){
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num = num / 10;
	}
	
	printf("The original number = %d\n", original);
    printf("The reverse of the said number = %d\n", reversed);
	
	return 0;
	
}