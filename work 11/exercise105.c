#include <stdio.h>

/*
105. Employee Structure Processing
Create a structure named "Employee" to store employee details such as employee ID, name, and salary. Write a program to input data for three employees, find the highest salary employee, and display their information.
*/

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {     
    struct employee e1, e2, e3;

	//take input
    printf("enter id name and salary: ");
    scanf("%d %s %f", &e1.id, e1.name, &e1.salary);

    printf("enter id name and salary: ");
    scanf("%d %s %f", &e2.id, e2.name, &e2.salary);

    printf("enter id name and salary: ");
    scanf("%d %s %f", &e3.id, e3.name, &e3.salary);
	
	// find the highest salary
    if(e1.salary > e2.salary && e1.salary > e3.salary){
        printf("highest salary employee:\n");
        printf("id: %d\nname: %s\nsalary: %.2f\n", e1.id, e1.name, e1.salary);
    }
    else if(e2.salary > e1.salary && e2.salary > e3.salary){
        printf("highest salary employee:\n");
        printf("id: %d\nname: %s\nsalary: %.2f\n", e2.id, e2.name, e2.salary);
    }
    else{
        printf("highest salary employee:\n");
        printf("id: %d\nname: %s\nsalary: %.2f\n", e3.id, e3.name, e3.salary);
    }

    return 0;
}
