//Q5. Write a program in C to clear nth bit of a number.
//The logic-> Take input and n, left shift 1 n times and compliment the result-> AND num with compliment.

#include <stdio.h>
int main() {
	int status, number, n, left, comp;
	scanf("%d%d", &number, &n);
	left = 1 << n;
	comp = ~left;
	status = number & comp;
	printf("The result is %d", status);
	}
