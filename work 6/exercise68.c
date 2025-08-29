#include <stdio.h>

int main()
{
	int find_small_num_in_array[6] = {0};
	int mini_value;
	int mini_position;
	
	printf("Input the 5 members of the array:\n");
	printf("Input the array elements:\n");
	for(int i = 0;i <= 5;i++){
		scanf("%d", &find_small_num_in_array[i]);
	}
	
	mini_value = find_small_num_in_array[0];
	
	for (int i = 1;i <= 6; i++){
		if(find_small_num_in_array[i] < mini_value ){
			mini_value = find_small_num_in_array[i];
			mini_position = i + 1;
		}
	}
	
	printf("Smallest Value: %d\n", mini_value);
	printf("Position of the element: %d\n", mini_position);
	
	return 0;
}