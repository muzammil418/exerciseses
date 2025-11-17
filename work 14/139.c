#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define some keywords to search for (expand this list!)
const char *keywords[] = {"Anomaly Detected", "Energy Spike", "Lifeform Signature"};
int num_keywords = sizeof(keywords) / sizeof(keywords[0]);


int main() {
    char filename[100]; // To store the name of the input file.  Get this from user?
    FILE *inputFile;
    char line[256]; // Buffer to hold each line read from the file
    char reportFilename[100] = "starfall_report.txt"; // Name for the output report file

    // 1. Get filename from the user (or hardcode it for testing)
    printf("Enter the name of the Chronos log file: ");
    scanf("%s", filename);  // Be careful about buffer overflows! Consider fgets() if you want to be extra safe.

    // 2. Open the input file in read mode ("r")
    inputFile = fopen(filename, "r");

    if (inputFile == NULL) {
        printf("Error opening file %s\n", filename);
        return 1; // Indicate an error occurred
    }


    // 3. Create/Open the report file in write mode ("w") - This will overwrite any existing file!
    FILE *reportFile = fopen(reportFilename, "w");

    if (reportFile == NULL) {
        printf("Error opening report file %s\n", reportFilename);
        fclose(inputFile); // Close the input file before exiting.  Important to prevent resource leaks!
        return 1;
    }


    // 4. Read the file line by line using fgets()
    //   - fgets reads a whole line from the file, including spaces.

    printf("Scanning log file...\n"); // Give user feedback

    while (fgets(line, sizeof(line), inputFile) != NULL) {
       for(int i = 0; i < num_keywords;i++){
		   if(strstr(line, keywords[i]) != NULL){
			   fprintf(reportFile, "%s", line);
			   break;
		   }
	   }
    }

    printf("Data recovery complete.\n");

    // 6. Close both files when you're done! This is *crucial*.
    fclose(inputFile);
    fclose(reportFile);

    return 0; // Indicate successful execution
}