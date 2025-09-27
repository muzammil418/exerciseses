#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int pos = 0;

    // find maximum and its index
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
            pos = i;
        }
    }

    int beforesum = 0;
    for(int i = 0; i < pos; i++){
        beforesum += arr[i];
    }

    int aftersum = 0;
    for(int i = pos + 1; i < size; i++){
        aftersum += arr[i];
    }

    printf("%d %d\n", beforesum, aftersum);

    return 0;
}
