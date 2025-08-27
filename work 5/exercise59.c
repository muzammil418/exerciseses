#include <stdio.h>

int main()
{
	//store data types
	int n, i;
	
	//take input
	 printf("Enter the length of perpendicular of triangle: ");
	scanf("%d", &n);
	
	//loop 
	for(i = 1; i <= n; i++){
		for(int j = 1;j <= i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}