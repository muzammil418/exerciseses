#include <stdio.h>
#include <stdlib.h>

/*

<return datatype> <function name> ( input arguments ){
	//statements
	return result (of type datatype)
}

*/

// Function definition
void printBigF(){
	printf("######\n");
	printf("#\n");
	printf("#\n");
	printf("#####\n");
	printf("#\n");
	printf("#\n");
	printf("#\n\n\n");
	
	return; //return nothing
}

float calculatePerimeter(float h, float w){
	float result = 2*(h+w);
	return result;
}

float circleArea(float radius){
	// Area of circle is Pi times r squared
	float pi = 3.142;
	return pi*radius*radius;
}

int main(){
	printBigF();
	printBigF(); //re-use
	
	float p = calculatePerimeter(2.0,2.0);
	float r;
	float cArea = 0.0;
	
	printf("My perimeter is: %f", p);
	
	printf("Before read: %f\n", r);
	printf("Enter new value: ");
	scanf("%f", &r); // now r is set to user input

	printf("Area of your circle is %f", circleArea(r));
	
	return 0;
}