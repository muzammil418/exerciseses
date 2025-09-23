#include <stdio.h>

/*
Example program for Struct in C
*/

int main(){
	struct Animal {
		char* name;
		unsigned int weight;
		unsigned int leg_count;
	};
	
	struct Animal cow = { "Gau Mata", 120, 4 };
	
	printf("Animal: name=%s, weight=%d kg, leg_count=%d\n", cow.name, cow.weight, cow.leg_count);
	
	
	struct Animal cat, dog;
	cat.name = "Mano";
	cat.weight = 4;
	cat.leg_count = cow.leg_count;
	
	
	dog.name = "Bruno";
	dog.weight = 4;
	dog.leg_count = cow.leg_count;
	
	
	printf("Animal: name=%s, weight=%d kg, leg_count=%d\n", cat.name, cat.weight, cat.leg_count);
	
	printf("Animal: name=%s, weight=%d kg, leg_count=%d\n", dog.name, dog.weight, dog.leg_count);
	
	return 0;
}