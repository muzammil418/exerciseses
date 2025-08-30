#include <stdio.h>
#include <string.h>
#include <math.h>

//Convert the code in 51a into a function that takes in a binary number and returns a decimal number. See point 4. at the top.

int binary_to_decimal(char binary_string[]) 
{
	int length;
	int decimal_num;
	length = strlen(binary_string);
	
	if (length <= 8){
		for (int i = 0; i < length; i++){
			if (binary_string[i] == '1'){
				decimal_num += pow(2,length - 1 - i );
			}
		}
	}
	else {
		printf("the binary number is not match the requirment\n");
	}
	return decimal_num;	
}

int main()
{
	char bin_num[9] = "0";// out put 11
	int decimal_num = 0;
	
	
	printf("enter the binary number you want to convert into decimal\n");
	printf("the binary number should be under or equal to 8 bits\n");
	scanf("%s", bin_num);
	
	decimal_num = binary_to_decimal(bin_num);
	
	printf("decimal number is %d\n", decimal_num);
	
	return 0;
}