#include <stdio.h>
#include <limits.h>


// My TCC is 32bit compiled

int main(void)
{
	//Type modifier => unsigned
	short int myVar0 = 0;
	unsigned int myVar = -4004; //only positive
	long long myVar2 = -4004; //2 times bigger than int
	
	/*
	Symbol => Nishan / Nishani
	0...9 => 1... 0-9
	
	Base 10 -- Decimal Number System
	00
	01
	02
	...
	09
	10
	11
	19 ... +1
	20
	...
	98
	99
	100
	
	Binary Number System -- 0 and 1:
	Dec => Bin
	0 => 0
	1 => 1
	2 => 10
	3 => 11
	4 => 100
	5 => 101
	6 => 110
	7 => 111
	8 => 1000
	9 => 1001
	10 => 1011
	11 => 1111
	12 => 10000
	
	Now, to add +1 we need 5 bits to represent the whole number. Exactly the same as number 4 for which we need 3 bits to store it completely.
	
	12 => 10000
	
	If we only had 4 bits, then number 12 can not be stored and the result of 1111 + 1 (in binary) would be 0000 (because 1 "carry" would be dropped from the left...)
	
	
	Binary is one bit -- bit is on or off
	Byte is 8 bits
	KB => Kilo Byte => 1024 Bytes
	MB => Mega Byte => 1024 KB
	GB => Giga Byte => 1024 MB
	*/
	
	//printf("My var = %d\n", myVar);
	
	//Print the min and max value that can be stored in int
	printf("Min int: %d, Max int: %d\n", INT_MIN, INT_MAX);
	
	//Print the min and max value that can be stored in unsigned int
	//If we don't use memory to store negative ints, then that part is used for more positive numbers extending the range by 2 times.
	printf("Min uint: %u, Max uint: %u\n", 0, UINT_MAX+1);
	
	printf("Size of int in Bytes is %d. This equals %d bits\n", sizeof(int), sizeof(int)*8);
	
	printf("Size of long in Bytes is %d. This equals %d bits\n", sizeof(myVar2), sizeof(myVar2)*8);
	
	printf("Size of short in Bytes is %d. This equals %d bits\n", sizeof(myVar0), sizeof(myVar0)*8);
	
	return 0;
}