//Q8. Write a program in C to get the lowest set bit of a number.

	#include <stdio.h>
	#define INT_SIZE sizeof(int) * 8
	
		int main() {
			int input, order, i;
			scanf("%d", &input);
			
			order = INT_SIZE - 1;
			
			for(i=0; i<INT_SIZE; i++) {
				if((input>>i)&1) {
					order = i;
					break;
				}
			}

			printf("%d", order);
		return 0;
		}
