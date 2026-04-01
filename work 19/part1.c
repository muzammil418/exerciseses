#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct song {
	char name[50];
	struct song *next;
	struct song *prev;
}song;

void addsong(song **head, char name[]){
	song* newsong = malloc(sizeof(song));
	strcpy(newsong->name, name);
	newsong->next = NULL;
	newsong->prev = NULL;
	
	if(*head ==  NULL){
		*head = newsong;
		return;
	}
	
	song* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	
	temp->next = newsong;
	newsong->prev = temp;
	
}

void nextsong(song **current){
	
	if(*current != NULL && (*current)->next != NULL){
		*current =  (*current)->next;
	}
	else{
		printf("no next song\n");
	}
	
}

void prevsong(song **current){
	
	if(*current != NULL && (*current)->prev != NULL){
		*current =  (*current)->prev;
	}
	else{
		printf("no prev song\n");
	}
	
}

int main() {
	song *head = NULL;
	
	addsong(&head, "song 1");
	addsong(&head, "song 2");
	addsong(&head, "song 3");
	
	song *current = head;
	
	nextsong(&current);
	nextsong(&current);
	
	prevsong(&current);
	prevsong(&current);
	
	return 0;
}