//Q6. C program to toggle or invert nth bit of a number.
//The logic-> Take input and n, then left shift 1 by n, then XOR input with left shift.

#include <stdio.h>
	int main() {
		int input, n, calc;
		scanf("%d%d", &input, &n);
		calc = input ^ (1 << n);
		printf("%d", calc);
		}

