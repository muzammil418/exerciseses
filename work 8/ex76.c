#include <stdio.h>

int main() {
    // Declare an array to store the broken wheel counts
    int wagon_wheels[10];
    int damaged_wagons = 0;

    printf("Enter broken wheel counts for 10 wagons:\n");
    for (int i = 0; i < 10; i++) {
        printf("Wagon %d: ", i + 1);
        scanf("%d", &wagon_wheels[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (wagon_wheels[i] >= 3) {
            damaged_wagons++;
        }
    }

    // Print the total number of significantly damaged wagons
    printf("Number of significantly damaged wagons: %d\n", damaged_wagons);

    return 0;
}
