#include <stdio.h>
#include <string.h>

/*
Program shows how strtok remembers string position inside
*/

#define DELIMITER ";"

int main(void)
{
	char myStr[5][100] = {
		"booker12;9012;Rachel;Booker",
		"grey07;2070;Laura;Grey",
		"johnson81;4081;Craig;Johnson",
		"jenkins46;9346;Mary;Jenkins",
		"smith79;5079;Jamie;Smith",
	};
	char line_copy[50];
	
	char *searchStr = "Mary";
	
	// Check if the CSV lines contain the name "Mary"
	
	for(int i=0; i<5; i++){
		//printf("Processing: %s\n", myStr[i]);
		
		strcpy(line_copy, myStr[i]);
		char *myPtr = strtok(myStr[i], DELIMITER);
		
		while(myPtr != NULL) {
			//printf("Token: %s\n", myPtr);
			myPtr = strtok(NULL, DELIMITER); //string input not required on second call
			
			//check if token equal search str
			if(myPtr != NULL){
				if(strcmp(searchStr, myPtr) == 0){
					printf("Found: %s\n", line_copy);
					break;
				}
			}
		}
		
		//printf("While loop finished.\n");
	}

	return 0;
}