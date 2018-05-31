//Q2. Write a program in C to check whether the Most Significant Bit of a number is set or not.
//The logic-> In order to know whether the msb of a number is set or not, we must operate it using the & operator with the resultant of moving the first bit of 1 to the highest order. Hence, we'll first define BITS as sizeof(int) * 8 which will be the total space taken by the integer in bits and then complement it by 1 and left shift the result with 1 as well. Here's how-

#include <stdio.h>
#define BITS sizeof(int) * 8

int main() {
	int input, msb, status;
	scanf("%d", &input);
	msb = 1 << (BITS - 1);
	status = input & msb;
	if(status == 1)
		printf("The MSB of %d is set (1)", input);
	else
		printf("The MSB of %d is not set (0)", input);
	return 0;
	}
