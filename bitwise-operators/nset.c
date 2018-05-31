//Q4. Write a program in C to set nth bit of a number.
//The logic-> Take a number and the value of n, left shift 1 n times and operate the resultant with the number using OR.

#include <stdio.h>

int main() {
	int input, n, left, status;
	scanf("%d%d", &input, &n);
	left = 1 << n;
	status = input | left;
	printf("Number after setting %d bit: %d", n, status);
	}
