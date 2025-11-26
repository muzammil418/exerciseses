#include <stdio.h>

int main() {
  int activation_codes[10]; // Array to store the potential activation codes
  int code_count;          // Number of elements in the array

  // Get the size of the activation code array from the user
  printf("Enter the number of activation codes: ");
  scanf("%d", &code_count);

  // Get the activation code readings from the user
  printf("Enter the activation codes:\n");
  for (int i = 0; i < code_count; i++) {
    scanf("%d", &activation_codes[i]);
  }

  // Your code to find the length of the longest increasing subsequence goes here!
   int longest_sequence_length = 0;
	
	for(int i = 0;i < code_count;i++){
		int count = 1;
		for(int j = i + 1; j < code_count;j++){
			if(activation_codes[j] > activation_codes[i]){
				count++;
			}
		}
		 if (count > longest_sequence_length) {
            longest_sequence_length = count;
        }
	}
//index: 0   1   2   3   4
//value:20  30  20  4  50

  // Example output (replace with your logic)
  printf("Length of the longest valid activation code sequence: %d\n", longest_sequence_length);

  return 0;
}