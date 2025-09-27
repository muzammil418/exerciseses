#include <stdio.h>

int main()
{
    char string[500];
    int n1, n2;
    char temp;
    
    printf("Enter a string: ");
    scanf("%s", string); 
    
    printf("Enter first position: ");
    scanf("%d", &n1);
    
    printf("Enter second position: ");
    scanf("%d", &n2);
    
    
    temp = string[n1 - 1];
    string[n1 - 1] = string[n2 - 1];
    string[n2 - 1] = temp;
    
    printf("Updated string: %s\n", string);
    
    return 0;
}
