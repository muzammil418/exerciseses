#include <stdlib.h>
#include <stdio.h>

int main()
{
	//datatype store integer, string and real number
	float fruit1;
	float fruit2;
	int price1 =200; 
	int price2 = 150; 
	float total1,total2;
	
	//take input 14 line is optional or 18 line is also
	//printf("the price of 1kg mango is 200\n");
	printf("enter the weight of mango:");
	scanf(" %f", &fruit1);
	
	//printf("the price of two kg water melon is 150\n");
	printf("enter the weight of water melon:");
	scanf("%f", &fruit2);
	
	//calculation
	total1 = price1*fruit1;
	total2 = price2*fruit2;
	
	//output result
	printf("the total value of furit is %.2f\n", total1+total2);
	
	return 0; 
}