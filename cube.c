#include <stdio.h>

double cube(double num);

int main() {
	int num;
	double c;
	
	scanf("%d", &num);

	c = cube(num);

	printf("%.2f", c);

	return 0;
	}

double cube(double num) {
	return (num * num * num);	}
