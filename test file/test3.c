#include <stdio.h>
#include <stdlib.h>  // for exit()
#include <string.h>  // for strcmp()

//function to add data in files
void searchStudent() {
     //open a file
    FILE *fp = fopen("scores.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
	//enter data in the  file 
	fprintf(fp, "hello world\n");
	fprintf(fp, "this is my first line in a file\n");
	
	fprintf("23134");
	
    //crate variable to store names and score
    char name[100];
    int score;
	char name1[100];
    int score1;
    
    //take input
    printf("enter student name: ");
    scanf("%s", name);
 
    printf("enter score: ");
    scanf("%d", &score);
    
    //using fscanf to print strings or integers
    while(fscanf(fp, "%s  %d", name1, score1) != EOF){
		if(strcmp(name, name2) == 0){
		printf("%s  ", name);
		}
		if(score == score1){
			printf(" %d\n", score):
		} 
	}
    
	fclose(fp);
}

int main (){
	while(1){
	searchStudent();
	break;
	}
	return 0;
}