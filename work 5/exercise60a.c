#include <stdio.h>

int main()
{
	//store data types
	int n, i,j;
	
	//take input
	 printf("Enter the length of perpendicular of triangle: ");
	scanf("%d", &n);
	
	//loop 
	for(i = 1; i <= n; i++){
		for( j = 1;j <= n ;j++){
			printf(" ");
		}
		for (int l = 1;l <= i ;l++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}