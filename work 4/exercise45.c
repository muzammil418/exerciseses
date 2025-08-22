#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float calculate(int x1, int x2, int y1, int y2){
	float total_value;
	total_value = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return total_value;
}


int main()
{
	int xa;
	int xb;
	int ya;
	int yb;
	
	printf("enter the value of x1:");
	scanf("%d", &xa);
	
	printf("enter the value of x2:");
	scanf("%d", &xb);
	
	printf("enter the value of y1:");
	scanf("%d", &ya);
	
	printf("enter the value of y2:");
	scanf("%d", &yb);
	
	printf("the answer is %.3f\n", calculate(xa, xb, ya, yb));
	
	return 0;
	
}