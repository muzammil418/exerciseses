#include <stdio.h>

// Function to count the number of supply pods
int countSupplyPods(int readings[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (readings[i] == 1) {
            count++;
        }
    }
    return count;
}

// Function to calculate the total weight of the cargo
int calculateTotalWeight(int numberOfPods) {
    int weight = 0;
    weight = numberOfPods * 5;

    return weight;
}

int main() {
    // Array to store scanner readings for 10 locations
    int asteroidReadings[10];
    int numberOfLocations = 10;

    printf("--- Cosmic Courier Mission: Asteroid Field Scan ---\n");
    printf("Scanning %d locations...\n", numberOfLocations);
    
    // Example: For pre-defined readings:
    int sampleReadings[] = {
        0,
        1,
        0,
        1,
        1,
        0,
        0,
        1,
        0,
        1
    };

    for (int i = 0; i < numberOfLocations; i++) {
        //asteroidReadings[i] = sampleReadings[i];
        printf("Enter scanner reading for location %d (0 or 1): ", i + 1);
        scanf("%d", & asteroidReadings[i]);
    }

    // Call the function to count supply pods
    int podsFound = countSupplyPods(asteroidReadings, numberOfLocations);

    printf("\n--- Mission Update ---\n");
    printf("Number of supply pods found: %d\n", podsFound);

    // Call the function to calculate total weight
    int cargoWeight = calculateTotalWeight(podsFound);
    printf("Total cargo weight: %d units\n", cargoWeight);

    return 0;
}