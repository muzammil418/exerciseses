#include <stdio.h>
#include <math.h>

double xSquared(double x){
	return x*x;
}

double mypow(double base, double n){
	// base = 2, n = 2
	/*
	<base> raised to power <n>
	2 raised to power 3
	
	Solution:
	base*base*... (or N many times)
	*/
	
	int result = base;
	
	for(int i=0; i<n-1; i++){ //n=2
		result = result*base;
	}
	
	return result;	
}

int main(){
	/*
	Expression solving order:
	
	RHS to LHS
	Inner most first for functions
	
	((((1))))
	*/
	
	double t0 = mypow(2,2); // RHS => 4.0
	printf("Output: %f\n", mypow(mypow(2,2),2));
	
	// printf("Output: %f\n", xSquared(xSquared(2)));
	// printf("Value of r: %d \n", r);
	
	return 0;
}