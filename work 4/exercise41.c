#include <stdio.h>

int calculateperimeter() {
	int h = 5;
	int w = 7;
	int calculateperimeter = 2*(h+w);
	return calculateperimeter;
}
int calculatearea() {
	int h = 5;
	int w = 7;
	int calculatearea = h*w;
	return calculatearea;
}

int main()
{
	printf("the perimeter is %d\n", calculateperimeter());
	printf("the area is %d\n", calculatearea());
	return 0;
}