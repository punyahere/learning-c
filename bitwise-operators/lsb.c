//Q1. Write a program to check whether the Least Significant Bit of a number is set or not.
// The logic-> Now, in order to check the status of any number under bitwise study, we use the AND (&) bitwise-operator. Here's why: Suppose the number under study is 12- the binary for 12 is 0000 1100 and the least significant bit (LSB) of it is clearly 0 (not set). However, in order to write a C program we will have to pit 12 against a bitwise-operator. Since the binary of 1 is 0000 0001, and 0000 1100 & 0000 0001 is 0000 0000, we can say that the result (not set) stays true. In fact, the result stays intact or true for each and every number.
//Hence, in order to check whether the LSB of a number is set (1) or not (0), we must first operate the user's input with 1 using &.

#include <stdio.h>
int main() {
	int status, input;
	scanf("%d", &input);
	status = input & 1;
	if(status == 1) 
		printf("The LSB of %d is set (1)", input);
	else
		printf("The LSB of %d is not set (0)", input);
	}

