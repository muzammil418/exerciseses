#include <stdio.h>


int add(int a, int b);


int add(int a, int b)
{
	return a+b;
}


int get_int() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}

int main(void)
{
  int x = get_int("x:");
  int y = get_int("y:");

  printf("%i\n", add(x, y));
}