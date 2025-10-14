#include <stdio.h>
#include <stdlib.h>

struct highscore {
	char name[50];
	char date [50];
	int value; 
};

int main() {
	struct highscore h1;
	char command = 0;
	int index = 0;
	int score[10] = {0};
	
	for (int i = 0;i < 10; i++){
		printf("%d. 0\n", i);
	}
	
	
	while(1){
		printf("enter the command:");
		scanf(" %c", &command);
		
		if (command == 'w'){
			printf("Enter an index:");
			scanf("%d", &index);
			
			printf("enter name: ");
            scanf("%s", h1.name);
			
			printf("enter date (00-00-00): ");
            scanf("%s", h1.date);
			
			printf("Enter a value:");
			scanf("%d", &h1.value);
			
			score[index] = h1.value;
			printf("\nHigh score table:\n");
			for (int i = 0;i < 10; i++){
				if (i == index){
					printf("%d. %d %s %s\n", i,score[i], h1.name, h1.date);
				}
				else{
					printf("%d. 0\n", i);
				}
			}
		}
	// if (command == 'u'){
			// printf("Enter an index:");
			// scanf("%d", &h1.index);
		
			// printf("Enter a value:");
			// scanf("%d", &h1.value);
			
			// printf("enter the name: ");
			// scanf("%s", h1.name);
			
			// printf("enter the date : 00-00-00);
			// scanf("%s", h1.date[h1.index]);
			
			// score[h1.index] = h1.value;
		
			// printf("\nHigh score table:\n");
			// for (int i = 0;i < 10; i++){
				// printf("%d. %d\n", i,score[i]);
			// }
	//}
	if (command == 'q'){
		exit(0);
	}
	}
	
	return 0;
}