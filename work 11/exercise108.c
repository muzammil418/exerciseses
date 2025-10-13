#include <stdio.h>

/*
108. Car Structure Management
Design a structure named "Car" to store details like car ID, model, and rental rate per day. Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.
*/

struct car {
	int id;
	char model[100];
	int rent;
};

int main() {
	struct car c1, c2, c3;
	int totalrent1 = 0;
	int totalrent2 = 0;
	int totalrent3 = 0;
	int num_of_days = 0;
	
	//take input
	printf("enter the car1 id model and rent: ");
	scanf("%d %s %d", &c1.id, c1.model, &c1.rent);
	
	printf("enter the car2 id model and rent: ");
	scanf("%d %s %d", &c2.id, c2.model, &c2.rent);
	
	printf("enter the car3 id model and rent: ");
	scanf("%d %s %d", &c3.id, c3.model, &c3.rent);
	
	printf("enter the number of days: ");
	scanf("%d", &num_of_days);
	
	//calculate the rent per day
	totalrent1 = c1.rent * num_of_days;
	totalrent2 = c2.rent * num_of_days;
	totalrent3 = c3.rent * num_of_days;
	
	//print output
	printf("result of car1 rent: %d\n", totalrent1);
	printf("result of car2 rent: %d\n", totalrent2);
	printf("result of car3 rent: %d\n", totalrent3);
	
	return 0;
}