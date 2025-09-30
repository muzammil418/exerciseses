#include <stdio.h>

//96. Check for Adjacent 5's in Array
//Write a C program to check whether a given array of integers contains 5 next to a 5 somewhere.


int main()
{
    int arr1[3] = {1,2,4};
    int arr2[5] = {1,5,5,1,3};
    int arr3[8] = {1,2,4,8,7,5,5,0};
    int found1 = 0;
    int found2 = 0;
    int found3 = 0;

    for(int i = 0; i < 3 - 1; i++){   // size - 1
        if(arr1[i] == 5 && arr1[i + 1] == 5){
            found1 = 1;
            break;
        }
    }

    for(int i = 0; i < 5 - 1; i++){
        if(arr2[i] == 5 && arr2[i + 1] == 5){
            found2 = 1;
            break;
        }
    }

    for(int i = 0; i < 8 - 1; i++){
        if(arr3[i] == 5 && arr3[i + 1] == 5){
            found3 = 1;
            break;
        }
    }

    printf("[1,2,4] => %d\n", found1);
    printf("[1,5,5,1,3] => %d\n", found2);
    printf("[1,2,4,8,7,5,5,0] => %d\n", found3);

    return 0;
}
