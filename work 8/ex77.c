#include <stdio.h>

int main() {
    // Declare a 2D array to store the market inventory
    int market_inventory[3][4];
    // Initialize the array with the given quantities
	market_inventory[0][0] = 15; // Fish in Row 1, Stall 1
    market_inventory[0][1] = 8; // Spices in Row 1, Stall 2
    market_inventory[0][2] = 22; // Textiles in Row 1, Stall 3
    market_inventory[0][3] = 5; // Pottery in Row 1, Stall 4

    market_inventory[1][0] = 7; // Fish in Row 2, Stall 1
    market_inventory[1][1] = 10; // Spices in Row 2, Stall 2
    market_inventory[1][2] = 3; // Textiles in Row 2, Stall 3
    market_inventory[1][3] = 12; // Pottery in Row 2, Stall 4

    market_inventory[2][0] = 9; // Fish in Row 3, Stall 1
    market_inventory[2][1] = 5; // Spices in Row 3, Stall 2
    market_inventory[2][2] = 18; // Textiles in Row 3, Stall 3
    market_inventory[2][3] = 7; // Pottery in Row 3, Stall 4

    int total_fish = 0;

    for (int i = 0; i < 3; i++) {
        total_fish += market_inventory[i][0]; // Column 0 = Fish
    }

    // Print the total number of Fish
    printf("Total Fish Available: %d\n", total_fish);

    return 0;
}