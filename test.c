#include <stdio.h>

int main()
{
	//store data types
	int n;
	
	//take input
	 // printf("Enter the length of perpendicular of triangle: ");
	// scanf("%d", &n);
	
	// //loop 
	// for (i = ****; i >= *; i--){
		// printf("%d", i);
	// }
	// return 0;
/*
	*
   **
  ***
 ****
*****
*/
	for(int i = 1; i <= 5; i++){
		for(int l = 4;l >= i; l--){
			printf(" ");
		}
		for(int j = 1;j <= i ;j++){
			printf("*");
		}
		printf("\n");
	}
}