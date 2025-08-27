#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user1, user2;

    printf("Enter the first whole number\n");
    scanf("%d", &user1);

    printf("Enter the second whole number\n");
    scanf("%d", &user2);

    if (user1 == user2)
    {
        printf("The numbers are equal\n");
    }

    if (user1 > user2)
    {
        printf("The first number is greater than the second.\n");
    }

    if (user1 < user2)
    {
        printf("The first number is smaller than the second\n");
    }

    if (user1 != user2)
    {
        printf("The numbers are not equal\n");
    }

    if (user1 >= user2)
    {
        printf("The first number is greater than or equal to the second.\n");
    }

    if (user1 <= user2)
    {
        printf("The first number is less than or equal to the second.\n");
    }

    return 0;
}
