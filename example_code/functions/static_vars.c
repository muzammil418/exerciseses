#include <stdio.h>

/*
Last output:
0. Returned val: 2
1. Returned val: 3
2. Returned val: 4
3. Returned val: 5
4. Returned val: 6
5. Returned val: 7
6. Returned val: 8
7. Returned val: 9
8. Returned val: 10
9. Returned val: 11
*/

int counter(){
	static int count = 1; // function won't forget this variable
	count++;
	
	return count;
}

int main(void)
{
	for(int i=0; i<10; i++){
		printf("%d. Returned val: %d\n", i, counter());
	}

	return 0;
}