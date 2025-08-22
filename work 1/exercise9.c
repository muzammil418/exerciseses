#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	
	printf("enter the whole \n");
	scanf("%d", &number);
  
if (number < 0 )
{
printf("The number is negative.\n");	
}
else if (number > 0)	
{
	printf("The number is positive.\n");
}
else if (number == 0)
{
	printf("The number is equal to zero.\n");
}

	
	return 0;
}