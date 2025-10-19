#include <stdio.h>

void swap(int* a, int* b){
	// Write code to swap two values through pointers
}

void muzz_reverse(char* arr, int j){
	int temp;
    for(int i = 0; i < j; i++){
        swap(&arr[i], &arr[j]);
        j--;
    }
}

int my_strlen(char* str1){
	int last = 0;
	
	while(str1[last] != '\0'){
		last = last + 1;
	}
	
	return last;
}

int main(void)
{
	char str[] = "hello, world"; // currently 0 (in tcc)
	char* str2 = str;
	
	muzz_reverse(str, my_strlen(str)-1);

	printf("Reverse: %s\n", str); // Same as printing str2
	printf("Reverse: %s\n", str2); // Same as printing str because both point to the same string data

	return 0;
}