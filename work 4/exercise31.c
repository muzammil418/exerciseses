#include <stdio.h>

// Write a C program that the lengths of the three sides of a triangle and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle, if the given values are valid. If the triangle is invalid, print "Invalid triangle" in the output.

int main() {
    float side1;
    float side2;
    float side3;
    float perimeter;

    // Take input from the user for the three sides
    printf("Enter the length of side one: \n");
    scanf("%f", &side1);
    printf("Enter the length of side two: \n");
    scanf("%f", &side2);
    printf("Enter the length of side three: \n");
    scanf("%f", &side3);

    // check all side can make a triangle or not
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
{
        perimeter = side1 + side2 + side3;
        printf("The perimeter of the triangle is %.2f\n", perimeter);
}
else{
        printf("Invalid triangle\n");
}

    return 0;
}