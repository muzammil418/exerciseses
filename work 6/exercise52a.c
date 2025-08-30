#include <stdio.h>

// Convert decimal to binary

int main()
{
	int store_decimal_num = 0;
	int bin_num[20] = {0};
	int i = 0;

	printf("enter the decimal number:\n");
	scanf("%d", &store_decimal_num);

	while (store_decimal_num > 0) {
		bin_num[i] = store_decimal_num % 2;
		store_decimal_num = store_decimal_num / 2;
		i++;
	}
	printf("binary number is ");
	for (int j = i - 1;j >= 0;j--){
		printf("%d", bin_num[j]);
	}
	printf("\n");
	return 0;
	
}