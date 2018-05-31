//Q3. Write a C program to find the nth bit of a number.
//The logic-> First, have the user enter a number and the value of n. Then, right shift the number by n and operate the resultant with 1 using the & operator.

#include <stdio.h>
int main() {
	int input, n, right, status;
	scanf("%d%d", &input, &n);	
	right = input >> n;
	status = right & 1;
	if(status == 1)
		printf("set");
	else
		printf("unset");
	}
