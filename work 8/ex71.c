#include <stdio.h>

int main() {
    int temperatureReadings[] = {25, -999, 18, 32, 12, -999, 28, 15}; // Example data
    int numReadings = sizeof(temperatureReadings) / sizeof(temperatureReadings[0]);  // Calculate the number of elements in the array
    int habitableCount = 0;
    int sumOfTemperatures = 0; // For the average calculation
	int numValidReadings = 0;
	
	for(int i = 0;i < numReadings; i++){
		if (temperatureReadings[i] == -999){
			continue;
		}
		
		sumOfTemperatures += temperatureReadings[i];
        numValidReadings++;
		
		if (temperatureReadings[i] >= 10 && temperatureReadings[i] <= 30){
			habitableCount++;
		}
	}
	
    printf("Number of potentially habitable locations: %d\n", habitableCount);
    printf("Average temperature of valid readings: %.2f\n", (double)sumOfTemperatures / numValidReadings); 

    return 0;
}