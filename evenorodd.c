#include <stdio.h>
	int isEven(int num) {
		return !(num & 1);
	}
	int main() {
		int num;
		scanf("%d", &num);
		if(isEven(num)) {
			printf("The number is even");
			}
		else {
			printf("issa odd");
			}

		return 0;
}
