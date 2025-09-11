#include <stdio.h>
#include <string.h>

int main() {
    char alienPhrase[] = "khoor#kxpdq$#krz#duh#|rx#grlqj#wrgd|B"; // Example data
    int phraseLength = strlen(alienPhrase); // msg length is 37 characters
    char decodedPhrase[38]; // Allocate space for the new string (+1 for null character)
    for(int i = 0;i < phraseLength ;i++){
		
		if(alienPhrase[i]  >= 'a' && alienPhrase[i] <= 'z'){
			decodedPhrase[i]  = alienPhrase[i] - 3;
		}
		else if(alienPhrase[i] == '#'){
			decodedPhrase[i] = ' ';
		}
		else if(alienPhrase[i] == '$'){
			decodedPhrase[i] = '!';
		}
		else if(alienPhrase[i] == '|'){
			decodedPhrase[i] = '?';
		}
		else if(alienPhrase[i] == 'B'){
			decodedPhrase[i] = '\0';
			break;
		}
	}

    printf("Decoded phrase: %s\n", decodedPhrase);

    return 0;
}