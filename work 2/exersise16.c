#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	// data type store integer
	int xa;
	int xb;
	int ya;
	int yb;
	float total_value;
	
	// take input
	printf("enter the value of x1:");
	scanf("%d", &xa);
	
	printf("enter the value of x2:");
	scanf("%d", &xb);
	
	printf("enter the value of y1:");
	scanf("%d", &ya);
	
	printf("enter the value of y2:");
	scanf("%d", &yb);
	
	//calculation
	total_value = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
	// xa = 1, xb = 2,  2-1, 1,2  =1 
	//total_value = pow(pow(2,2),2);
	//output
	printf("distance between the said point:%.4f\n", total_value);
	
	return 0;
}