#include <stdio.h>

/*
102. Time Structure Calculations
Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.
test value : 2 40 5
test value : 6 40 60
*/

struct time {
	int hours;
	int seconds;
	int minutes ;
};

int main (){
	struct time t1, t2, sum;
	
	printf("enter hours second and minutes: ");
	scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
	
	printf("enter hours second and minutes: ");
	scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
	
	//adding both time
	sum.seconds = t1.seconds + t2.seconds;
	sum.minutes = t1.minutes + t2.minutes + sum.seconds / 60;
	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
	
	sum.seconds % 60;
	sum.minutes % 60;
	
	printf("\nTotal time = %d:%d:%d\n", sum.hours, sum.minutes, sum.seconds);
	
	return 0;
}