#include <stdio.h>

//Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.

int main()
{
	//data types
	int count = 0,marks;
	float sum = 0;
	
	printf("Input Mathematics marks (0 or negative terminate):\n");
	
	//loop
	while(1){
		 scanf("%d", &marks);
		 
		 if(marks <= 0)
		 {
			 break;
		 }
		 
		sum += marks;
		count++;
	}		
	
	if(count > 0){
		printf("Average marks in Mathematics: %.2f\n", sum / count);
	}
	else{
		printf("No marks entered.\n");
	}
	
	return 0;
}
