#include <stdio.h>

//Convert the code in 52a into a function that takes in a decimal number and returns a binary number. See point 4. at the top.

// we create a function or calculate every thing in the function
int decimal_to_bin(int store_decimal_num)
 {
	int bin_num[20] = {0};
	int i = 0;
	
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
	
	return bin_num[i];
}


//or right there we take input or print the value 
int main()
{
	int take_decimal_num = 0;
	
	printf("enter the decimal number:\n");
	scanf("%d", &take_decimal_num);
	
	decimal_to_bin(take_decimal_num);
	
	return 0;
}