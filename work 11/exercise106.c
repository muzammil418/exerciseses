#include <stdio.h>

/*
106. Date Structure Operations
Define a structure named "Date" with members day, month, and year. Write a C program to input two dates and find the difference in days between them.
*/

struct date {
	int day;
	int month;
	int year;
};

int main() {
	struct date d1, d2;
	int totaldays1 = 0;
	int totaldays2 = 0;
	int result = 0;
	
	//take input
	printf("enter the day month year: ");
	scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
	
	printf("enter the day month year: ");
	scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
	
	//converting year intto days or month into days
	totaldays1 = d1.year * 365 + d1.month * 30 + d1.day;
	totaldays2 = d2.year * 365 + d2.month * 30 + d2.day;
	
	//now finding the days between them
	result = totaldays1 - totaldays2;
	
	//print output
	printf("difference between dates = %d days\n", result);
	
	return 0;
}