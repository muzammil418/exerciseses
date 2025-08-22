#include <stdio.h>
#include <stdlib.h>

int main()
{
	//where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
	//datatypes
	int q;
	int p;
	int r;
	int s;
	
	//input
	printf("requirment q, r and s are positive and p is even\n\n");
	
	printf("enter the q:\n");
	scanf("%d", &p);
	
	printf("enter the r:\n");
	scanf("%d", &q);
	
	printf("enter the s:\n");
	scanf("%d", &r);
	
	printf("enter the p: \n");
	scanf("%d", &s);
	
	//calculation
	 if ((r + s) > (p + q) && (q > r) && (s > p) && (q > 0) && (r > 0) && (s > 0) && (p % 2 ==0))
	 {
		 printf("correct value\n");
	 }
	 
	 else {
		 printf("false value\n");
	 }
}
//((r + s) > (p + q) && (q > r) && (s > p) && (q > 0) && (r > 0) && (1) && (false))