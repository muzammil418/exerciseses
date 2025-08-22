#include <stdio.h>
#include <stdlib.h>

int calculateperimeter(float radius) {
	float pi = 3.1416;
	float calculateperimeter = 2*pi*radius;
	return calculateperimeter;
}

int  calculateare(float radius){
	float pi = 3.1416;
	float calculateare = pi*radius*radius;
	return calculateare;
}

int main()
{
	float r;
	printf("enter the radius of the circle\n");
	scanf("%f", &r);
	printf("the perimeter of the circle is %d\n", calculateperimeter(r));
	printf("the area of the circle is %d\n", calculateare(r));
	
}