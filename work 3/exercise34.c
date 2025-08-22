#include <stdio.h>

// Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.

int main()
{
	//dtata types
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	float average;
	float sum = 0;
	int count = 0;
	
	//take input 
	printf("enter the first number\n");
	scanf("%f", &num1);
	
	printf("enter the second number\n");
	scanf("%f", &num2);
	
	printf("enter the third number\n");
	scanf("%f", &num3);
	
	printf("enter the fourth number\n");
	scanf("%f", &num4);
	
	printf("enter the fifth number\n");
	scanf("%f", &num5);
	
	// if statement to check the number is positive,count the number and sum asign the value
	if (num1 > 0){
		sum += num1;
		count = count + 1;
	}
	if (num2 > 0){
		sum = sum + num2;
		count = count + 1;
	}
	if (num3 > 0){
		sum = sum + num3;
		count = count + 1;
	}
	if (num4 > 0){
		sum = sum + num4;
		count = count + 1;
	}
	if(num5 > 0){
		sum = sum + num5;
		count = count + 1;
	}
	
	//calculation
	average = sum / count;
	
	// print out put
	printf("Number of positive numbers:%d\n", count);
	printf("Average value of the said positive numbers:%.2f\n", average);
	
	return 0;
}