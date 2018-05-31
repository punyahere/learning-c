//Q9. Write a program in C to count the number of trailing zeroes.

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

	int main() {
		int input, count, i;
		scanf("%d", &input);
		
		count = 0;

		for(i=0; i<INT_SIZE; i++) {
			if((input >> i) & 1)
				break;
			count++;
		}
		printf("%d",count);
		return 0;
		}
