#include <stdio.h>

/*
Example program for Struct in C
*/

int main(){
	struct Animal {
		char* name; // 8 bytes
		unsigned int weight; // 4 bytes (in TCC)
		unsigned int leg_count; // 4 bytes (in TCC)
	};
	
	struct Animal cow = { "Gordon", 120, 4 }; // Initialize
	
	// Modifying values using pointers
	int* ptr = 27893582;
	*ptr += 6;
	
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
	
	printf("Size of struct Animal: %d\n", sizeof(cow)); // 16 bytes (in TCC)
	return 0;
}