#include <stdio.h>
int main()
{
	int n[8];
	int count_even = 0,count_odd = 0;
	int count_pos = 0,count_neg = 0;
	
	printf("enter the seven integer:");
	for (int i = 0;i < 7; i++){
		scanf("%d", &n[i]);
	}
	for (int i = 0;i < 7; i++){
		if(n[i] % 2 == 0){
			count_even++;
		}
		if(n[i] % 2 != 0){
			count_odd++;
		}
		if(n[i] > 0){
			count_pos++;
		}
		if(n[i] < 0){
			count_neg++;
		}
	}
	
	printf("Number of even values: %d\n", count_even);
	printf("Number of odd values: %d\n", count_odd);
	printf("Number of positive values: %d\n", count_pos);
	printf("Number of negative values: %d\n", count_neg);
	
	return 0;
}