#include <stdio.h>
#define PI 3.1416

// 104. Circle Structure Calculations
// Define a structure named Circle to represent a circle with a radius.
// Write a C program to calculate the area and perimeter of two circles and display the results.

struct Circle {
    float radius;
};

int main() {
    struct Circle c1, c2;
    float area1, perimeter1, area2, perimeter2;

    // Input for first circle
    printf("Enter the radius of first circle: ");
    scanf("%f", &c1.radius);

    // Input for second circle
    printf("Enter the radius of second circle: ");
    scanf("%f", &c2.radius);

    // Calculate area and perimeter of both circles
    area1 = PI * c1.radius * c1.radius;
    perimeter1 = 2 * PI * c1.radius;

    area2 = PI * c2.radius * c2.radius;
    perimeter2 = 2 * PI * c2.radius;

    // Display results
    printf("\nFirst Circle:\n");
    printf("Radius = %.2f\nArea = %.2f\nPerimeter = %.2f\n", c1.radius, area1, perimeter1);

    printf("\nSecond Circle:\n");
    printf("Radius = %.2f\nArea = %.2f\nPerimeter = %.2f\n", c2.radius, area2, perimeter2);

    return 0;
}
