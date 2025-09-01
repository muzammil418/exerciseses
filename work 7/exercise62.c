#include <stdio.h>

//Write two functions to convert corresponding values of Fahrenheit to Celsius and Celsius to Fahrenheit.

Using the two functions, implement the following.

float calculate_Celsius_to_Fahrenheit(float celsius){

	float f = (celsius * 9/5) + 32.0;
	return f;
 }
float calculate_Fahrenheit_to_Celsius(float Fahrenheit){
	float c = (Fahrenheit - 32)*5 / 9;
	return c;
}
 
int main()
{
	printf("Celsius to Fahrenheit\n");
	printf("---------------------\n");
	
	for(float i = 0.0;i <= 150.0; i++){
		printf("%.2f 	      %.2f", i,calculate_Celsius_to_Fahrenheit(i));
		printf("\n");
	}
	
	printf("Celsius to Fahrenheit\n");
	printf("---------------------\n");
	
	for(float i = 0.0;i <= 150.0; i++){
		printf("%.2f 	      %.2f", i,calculate_Fahrenheit_to_Celsius(i));
		printf("\n");
	}
}