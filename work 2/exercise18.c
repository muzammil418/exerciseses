#include <stdio.h>
#include <stdlib.h>

int main()
{
	//data types
	int oppy;
	int note100 = 100, note50 = 50, note20 = 20, note10 = 10;
	int note5 = 5, note2 = 2, note1 = 1;
	int notes100,notes50,notes20,notes10,notes5,notes2,notes1;
	int remaning;
	
	//input
	printf("amount should be less than 1000\n");
	printf("enter the amount\n");
	scanf("%d", &oppy);
	
//calculation
notes100 = oppy / note100;//128
remaning = oppy % note100;

notes50 = remaning / note50;
remaning = remaning % note50;

notes20 = remaning / note20;
remaning = remaning % note20;

notes10 = remaning / note10;
remaning = remaning % note10;

notes5 = remaning / note5;
remaning = remaning % note5;
//3
notes2 = remaning / note2;
remaning = remaning % note2;
//1
notes1 = remaning ;

//output
printf("There are:\n");
printf("%d Note(s) of 100.00\n", notes100);
printf("%d Note(s) of 50.00\n", notes50);
printf("%d Note(s) of 20.00\n", notes20);
printf("%d Note(s) of 10.00\n", notes10);
printf("%d Note(s) of 5.00\n", notes5);
printf("%d Note(s) of 2.00\n", notes2);
printf("%d Note(s) of 1.00\n", notes1);
 
 return 0;
}