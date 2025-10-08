#include <stdio.h>

// 106. Date Structure Operations
// Define a structure named "Date" with members day, month, and year.
// Write a C program to input two dates and find the difference in days between them.

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d1, d2;
    int totalDays1, totalDays2, diff;

    // Input first date
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    // Input second date
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    // Convert to total days (approximation)
    totalDays1 = d1.year * 365 + d1.month * 30 + d1.day;
    totalDays2 = d2.year * 365 + d2.month * 30 + d2.day;

    // Find the difference
    diff = totalDays1 - totalDays2;

    // Display the result
    printf("\nDifference between dates: %d days\n", diff);

    return 0;
}
