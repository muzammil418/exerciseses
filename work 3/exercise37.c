#include <stdio.h>

int main()
{
	 int x;
	 int y;
	 
	 printf("enter the value of x:");
	 scanf("%d", &x);
	 
	 printf("enter the value of y:");
	 scanf("%d", &y);
	 
	 if(x > 0 && y > 0){
		 printf("Quadrant-I (+,+)\n");
	 }
	 else if (x < 0 && y > 0){
		 printf("Quadrant-II (-,+)\n");
	 }
	 else if (x < 0 && y < 0){
		 printf("Quadrant-III (-,-)\n");
	 }
	 else if (x > 0 && y < 0){
		 printf("Quadrant-IV (+,-)\n");
	 }
	 
	 return 0;
}