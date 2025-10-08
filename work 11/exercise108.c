#include <stdio.h>

// 108. Car Structure Management
// Design a structure named "Car" to store details like car ID, model, and rental rate per day.
// Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.

struct Car {
    int id;
    char model[50];
    float ratePerDay;
};

int main() {
    struct Car c1, c2, c3;
    int days;
    float cost1, cost2, cost3;

    // Input car details
    printf("Enter first car ID, model, and rental rate per day:\n");
    scanf("%d %s %f", &c1.id, c1.model, &c1.ratePerDay);

    printf("Enter second car ID, model, and rental rate per day:\n");
    scanf("%d %s %f", &c2.id, c2.model, &c2.ratePerDay);

    printf("Enter third car ID, model, and rental rate per day:\n");
    scanf("%d %s %f", &c3.id, c3.model, &c3.ratePerDay);

    // Input number of rental days
    printf("\nEnter number of rental days: ");
    scanf("%d", &days);

    // Calculate total rental cost for each car
    cost1 = c1.ratePerDay * days;
    cost2 = c2.ratePerDay * days;
    cost3 = c3.ratePerDay * days;

    // Display details
    printf("\n--- Car Rental Details ---\n");
    printf("Car 1: ID=%d, Model=%s, Rate=%.2f, Total Cost=%.2f\n", c1.id, c1.model, c1.ratePerDay, cost1);
    printf("Car 2: ID=%d, Model=%s, Rate=%.2f, Total Cost=%.2f\n", c2.id, c2.model, c2.ratePerDay, cost2);
    printf("Car 3: ID=%d, Model=%s, Rate=%.2f, Total Cost=%.2f\n", c3.id, c3.model, c3.ratePerDay, cost3);

    return 0;
}
