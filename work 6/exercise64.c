#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int temp = 0;
	
	printf("enter the number\n");
	scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
	
	if(a > b){
		(temp = a, a = b,b =temp);
	}
	 if (a > c) { 
		(temp = a, a = c, c = temp);
	 }
    if (b > c) {
		(temp = b, b = c, c = temp); 
		}
		
	printf("Num1: %d, Num2: %d, Num3: %d \n", a, b, c);

	
	return 0;
}