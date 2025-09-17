#include <stdio.h>

int main()
{
	char commands[99] = "R2F3B1L4";
	int x = 0;
	int y = 0;
	
	for (int i = 0;commands[i] != '\0'; i += 2){
		int steps = commands[i+1] - '0';
		if (commands[i] == 'F'){
			y += steps;
		}
		if(commands[i] == 'B') {
			y -= steps;
		}
		if(commands[i] == 'R') {
			x += steps;
		}
		if(commands[i] == 'L') {
			x -= steps;
		}
	}
	
	printf("Final coordinates: (%d, %d)\n", x, y);
	
	if (x == 8 && y == -4) {
		printf("Minerals found!\n");
	}else {
		printf("Probe lost. Analyze path again!\n");
	}
	return 0;
}