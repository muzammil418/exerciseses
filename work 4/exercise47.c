#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x1;
	int x2;
	int x3;
	
	printf("enter the temperature:\n");
	scanf("%d", &x1);
	
	printf("enter the humidity:\n");
	scanf("%d", &x2);
	
	printf("enter the wind speed:\n");
	scanf("%d", &x3);
	
	if (x1 > 20 && x2 < 60 && x3 < 20)
	{
		printf("sunny\n");
	}
	else if (x1 > 10 && x1 < 20 && x2 > 40 && x2 < 80 && x3 < 30)
	{
		printf("cloudy\n");
	}
	 else if (x1 < 10 && x2 > 80 && x3 > 30)
	{
		printf("rainy\n");
	}
	else
	{
		printf("unknow\n");
	}
	return 0;
}