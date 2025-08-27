#include <stdlib.h>
#include <stdio.h>

int rocketscience(int first, int second){
	
	if (first % 2 == 0){
	printf("the number is odd\n");
	}
	else {
	printf("the number is even\n");
	}
	
	if (second % 2 ==0){
		printf("the number is odd\n");
	}
	else {
	printf("the number is even\n");
	}
		
	return 0;
}

int main()
{
	int x1;
	int x2;
	
	printf("enter the first integer\n");
	scanf("%d", &x1);
	
	 printf("enter the second integer\n");
	 scanf("%d", &x2);

	printf("%d\n", rocketscience(x1, x2));
		
	return 0;
}