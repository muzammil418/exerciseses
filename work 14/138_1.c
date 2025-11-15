#include <stdio.h>

//create a function to count string lenght
int my_strlen(char str[]){
	//variable to store string lenght
	int count = 0;
	
	for(int i = 0;i < 1000;i++){
		//coundion work untile it find null charater
		if(str[i] != '\0'){
			count++;
		}
		else{
			return count;
		}
	}
	
}

void my_strcpy(char dest[], char src[]){
	for(int i = 0; i < 1000;i++){
		if(src[i] != '\0'){
			dest[i] = src[i];
		}
		else{
			dest[i] = '\0';
			//printf("output: %s\n", dest);
			return;
		}
	}
}

void my_strcat(char dest[], char src[]){
	int count = my_strlen(dest);
	
	for(int i = 0;i < 1000;i++){
		if(src[i] != '\0'){
			dest[count + i] = src[i];
		}
		else{
			dest[count + i] = '\0';
			//printf("output: %s\n", dest);
			return;
		}
	}
}

int my_strcmp(char str1[], char str2[]){
	 for (int i = 0; i < 1000; i++) {

        if (str1[i] != str2[i]) {
            if (str1[i] < str2[i]) {
                //printf("Output: negative value (since '%c' < '%c')\n", str1[i], str2[i]);
            } else {
               // printf("Output: positive value (since '%c' > '%c')\n", str1[i], str2[i]);
            }
            return str1[i] - str2[i];
        }

        if (str1[i] == '\0' || str2[i] == '\0') {
            //printf("Output: 0 (both strings ended together)\n");
            return str1[i] - str2[i];
        }
	}
}

void my_strrev(char str[]){
	int start = 0;
    int end = my_strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    //printf("reversed string: %s\n", str);
}

int main (){
	char name[1000];
	char copied[1000];
	
	printf("Enter your wizard name: ");
	scanf("%s", name);
	
	int lenght = my_strlen(name);
	printf("Your name has %d letters.\n", lenght);
	
	my_strcpy(copied, name);
	my_strcat(copied, " the Brave");
	printf("Copy successful! Your title is: %s\n", copied);
	
	int num = my_strcmp(name, copied);
	printf("comparing '%s' and '%s' gives: %d\n", name, copied, num);
	
	my_strrev(name);
	printf("Your secret code name is: %s\n", name);
	
	return 0;
}