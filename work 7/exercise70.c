#include <stdio.h>
#include <stdlib.h>

int main()
{
	char command = 0;
	int index = 0;
	int value = 0;
	int score[10] = {0};
	//int w,u,q;
	
	for (int i = 0;i < 10; i++){
		printf("%d. 0\n", i);
	}
	
	// printf("enter the command:");
	// scanf(" %c", &command);
	
	while(1){
		printf("enter the command:");
		scanf(" %c", &command);
	
		if (command == 'w'){
			printf("Enter an index:");
			scanf("%d", &index);
		
			printf("Enter a value:");
			scanf("%d", &value);
		
			score[index] = value;
		
			printf("\nHigh score table:\n");
			for (int i = 0;i < 10; i++){
				printf("%d. %d\n", i,score[i]);
			}
		}
	if (command == 'u'){
			printf("Enter an index:");
			scanf("%d", &index);
		
			printf("Enter a value:");
			scanf("%d", &value);
		
			score[index] = value;
		
			printf("\nHigh score table:\n");
			for (int i = 0;i < 10; i++){
				printf("%d. %d\n", i,score[i]);
			}
	}
	if (command == 'q'){
		exit(0);
	}
	}
	return 0;
}