#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main() {
	int num1, num2, maxim, minim;
	scanf("%d%d", &maxim, &minim);
	maxim = max(num1, num2);
	minim = min(num1, num2);
	printf("%d", maxim);
	printf("%d", minim);
	return 0;
		}
int max(int num1, int num2) {
	return (num1 > num2) ? num1 : num2;
		}
int min(int num1, int num2) {
	return (num1 > num2) ? num2 : num1;
		}

