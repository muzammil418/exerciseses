#include <stdio.h>

//101. 1. Student Structure Operations
//Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.

struct student {
	char name[50];
	int age;
	float totalmarks;
};

int main() {
	struct student s1, s2, sum;
	float average;
	
	//take input
	printf("enter the name age and totalmarks: ");
	scanf("%s %d %f", s1.name, &s1.age, &s1.totalmarks);
	
	printf("enter the name age and totalmarks: ");
	scanf("%s %d %f", s2.name, &s2.age, &s2.totalmarks);
	
	//calculate the average
	average = (s1.totalmarks + s2.totalmarks) / 2;
	
	//print output
	
	printf("the average of total marks is: %.2f\n", average);
	
	return 0;
}