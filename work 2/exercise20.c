 #include <stdio.h>
#include <stdlib.h>

int main()
{
	//data types
	int a;
	int b;
	int c;
	int d;
	int e;
	int sum = 0;
	
	//input 
	printf("enter the first number:\n");
	scanf("%d", &a);
	
	printf("enter the second number:\n");
	scanf("%d", &b);
	
	printf("enter the third number:\n");
	scanf("%d", &c);
	
	printf("enter the fourth number:\n");
	scanf("%d", &d);
	
	printf("enter the fifth number:\n");
	scanf("%d", &e);
	
	//calculation
	if (a % 2 != 0){
        sum += a;
	}
	printf("Sum of all odd values:%d\n", sum);
	
	if (b % 2 != 0){
	sum = sum+ b;
	}
	printf("Sum of all odd values:%d\n", sum);
	
	if (c % 2 != 0){
        sum += c;
	}
	printf("Sum of all odd values:%d\n", sum);
	
	if (d % 2 != 0)
        sum += d;
	printf("Sum of all odd values:%d\n", sum);
	
	if (e % 2 != 0)
        sum += e;
	printf("Sum of all odd values:%d\n", sum);
	
	//output
	
	printf("Sum of all odd values:%d\n", sum);
	
	return 0;
}
//if (1  != 0)
        // sum += a;
	
	// if (2 % 2 != 0)
        // sum += b;
	
	// if (1 != 0)
        // sum += c; a+c+e
	
	// if (0 != 0)
        // sum += d;
	
	// if (1 != 0)
        // sum += e;