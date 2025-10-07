#include <stdio.h>

// 105. Employee Structure Processing
// Create a structure named "Employee" to store employee details such as employee ID, name, and salary.
// Write a program to input data for three employees, find the highest salary employee, and display their information.

struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
    struct Employee e1, e2, e3, highest;

    // Input employee details
    printf("Enter first employee ID, name and salary:\n");
    scanf("%d %s %f", &e1.id, e1.name, &e1.salary);

    printf("Enter second employee ID, name and salary:\n");
    scanf("%d %s %f", &e2.id, e2.name, &e2.salary);

    printf("Enter third employee ID, name and salary:\n");
    scanf("%d %s %f", &e3.id, e3.name, &e3.salary);

    // Find the highest salary
    if (e1.salary > e2.salary && e1.salary > e3.salary) {
        highest = e1;
    } 
    else if (e2.salary > e1.salary && e2.salary > e3.salary) {
        highest = e2;
    } 
    else {
        highest = e3;
    }

    // Display highest salary employee
    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\n", highest.id);
    printf("Name: %s\n", highest.name);
    printf("Salary: %.2f\n", highest.salary);

    return 0;
}
