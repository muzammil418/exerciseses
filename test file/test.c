#include <stdio.h>
#include <string.h>
/*
i want to count the lenght of string the lenght of string is 3
// 974

*/
typedef char first;
typedef int date;

struct person {
	first name[50];
	date birth;
};

// void printMyArray(struct person *p1, int sz){
	// for(int i=0; i<sz; i++){
		// printf("%s\n", *(p1->name + i) );
		// // printf("%d\n", *(p1->birth + i) );
	// }
// }
	
int main(){
	struct person p1[5] = {
		{"nuketro0p3r", 1995},
		{"gamexpro_59820", 2009},
		{"iqstrikeryt_88228", 2011},
		{"chyt1k", 2013},
		{"x_xvoidwalker", 2013},
	};
	
	struct person *ptr = p1;
	
	//printMyArray(&p1, 5);
	
	
	for(int i=0; i<5; i++){
		printf("print name: %s\n", ptr[i].name);
		printf("print date: %d\n", ptr[i].birth);
		printf("print Address: %d\n", ptr + i);
		
	}
}