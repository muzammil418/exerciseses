#include <stdio.h>
#include <stdlib.h>

int main()
{
	// data types
	int year,months,remaning_days,days;
	int givendays;
	
	//input
	printf("enter the days\n");//367
	scanf("%d", &givendays);
	
	//calculation
	year = givendays / 365;//one year
	remaning_days = givendays %  365; 
	months = remaning_days / 30;
	days = remaning_days % 30;//2 days
	
	//give the answer
	printf("years %d\n", year);
	printf("months %d\n", months);
	printf("days %d\n", days);
	

	
	return 0;
}