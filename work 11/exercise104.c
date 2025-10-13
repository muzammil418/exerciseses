#include <stdio.h>

/*
104. Circle Structure Calculations
Define a structure named Circle to represent a circle with a radius. Write a C program to calculate the area and perimeter of two circles and display the results.
*/


struct circle {
    float radius;
    float area;
    float perimeter;
};

int main() {
    struct circle c1, c2;
	
	//take input
    printf("enter radius of first circle: ");
    scanf("%f", &c1.radius);

    printf("enter radius of second circle: ");
    scanf("%f", &c2.radius);

	//find circle area or perimeter
    c1.area = 3.14 * c1.radius * c1.radius;
    c1.perimeter = 2 * 3.14 * c1.radius;

    c2.area = 3.14 * c2.radius * c2.radius;
    c2.perimeter = 2 * 3.14 * c2.radius;
	
	//prit out put
    printf("\nfirst circle area = %.2f and perimeter = %.2f\n", c1.area, c1.perimeter);
    printf("second circle area = %.2f and perimeter = %.2f\n", c2.area, c2.perimeter);

    return 0;
}
