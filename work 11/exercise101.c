#include <stdio.h>

//101. 1. Student Structure Operations
//Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main(){
	struct Student s1, s2;
	float average;
	
	printf("Enter name, age, and total marks of student 1:\n");
    scanf("%s %d %f", s1.name, &s1.age, &s1.totalMarks);

    // Input for second student
    printf("Enter name, age, and total marks of student 2:\n");
    scanf("%s %d %f", s2.name, &s2.age, &s2.totalMarks);

    // Display both students' info
    printf("\nStudent 1: %s, Age: %d, Total Marks: %.2f\n", s1.name, s1.age, s1.totalMarks);
    printf("Student 2: %s, Age: %d, Total Marks: %.2f\n", s2.name, s2.age, s2.totalMarks);

    // Calculate average of total marks
    average = (s1.totalMarks + s2.totalMarks) / 2;

    printf("\nAverage of total marks: %.2f\n", average);

	return 0;
}