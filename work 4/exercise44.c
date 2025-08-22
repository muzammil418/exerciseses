#include <stdio.h>
#include <stdlib.h>

int calculate(int first, int second){
	if (first < second) // (5 < 10)
	{
		return first;
	}
	 if (first > second)
	 {
		return second;
	 }

}

int main()
{
	int f1;
	int f2;
	
	printf("enter the first the first number \n");
	scanf("%d", &f1);
	
	printf("enter the second number \n");
	scanf("%d", &f2);
	
	int result = calculate(f1, f2);
	
	printf("the minimum of two number is %d\n", result);
	
		return 0;
}