#include <stdio.h>
#include <string.h>
#include <math.h>

/*
Take a binary number as input from the user and convert it to decimal. Maximum user input can be of length 8. User input must be a positive number.

(if needed) Use the strlen function from string.h library to verify the length.
Usage: strlen("Hello"); // returns 5 as result

Use the exit function from stdlib.h to exit the program if input conditions are not met.
Usage: exit(int); // exits the program when called
*/
//1011
  // 4
int main()
{
	char bin_num[9] = "0";// out put 11
	int i,length,decimal_num = 0;
	
	
	printf("enter the binary number you want to convert into decimal\n");
	printf("the binary number should be under or equal to 8 bits\n");
	scanf("%s", bin_num);
	
	length = strlen(bin_num);
	
	if (length <= 8){
		for (i = 0; i < length; i++){
			if (bin_num[i] == '1'){
				decimal_num += pow(2,length - 1 - i );
			}
		}
		 printf("%d\n", decimal_num);
	 }
	else {
		printf("the binary number is not match the requirment\n");
	}
	return 0;	
}