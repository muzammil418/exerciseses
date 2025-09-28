#include <stdio.h>
#include <string.h>

/*
Example program for Struct in C - Ex 2
*/

struct Animal {
	char* name; // 8 bytes
	unsigned int weight; // 4 bytes (in TCC)
	unsigned int leg_count; // 4 bytes (in TCC)
};

int main(){
	struct Animal arr[5];
	//char* animal_id = "AnimalName_1"; // {'1', '\0'} => 2 bytes
	char animal_ids[5][13] = {
		"AnimalName_1",
		"AnimalName_1",
		"AnimalName_1",
		"AnimalName_1",
		"AnimalName_1"
	};
	
	// Example value update
	for(int i=0; i<5; i++){
		arr[i].name = animal_ids[i]; //store pointer for i-th string in animal_ids
		arr[i].weight = i*10;
		arr[i].leg_count = i+4;
		
		// Update name in animal_id
		animal_ids[i][11] = animal_ids[i][11] + i;
	}
	
	// Print
	for(int i=0; i<5; i++){
		printf("Animal(name: %s, weight:%d, leg_count:%d)\n", arr[i].name, arr[i].weight, arr[i].leg_count);
	}
	
	return 0;
}