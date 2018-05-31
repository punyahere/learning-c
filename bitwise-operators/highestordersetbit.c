//Q7. Write a program in C to find the highest order set bit of a number.
//The logic-> First, get the size the integer will occupy in bits, then, write a for loop till, say, i < INT_SIZE and find order till the loop exits at a set bit. Here's what I'm trying to say->

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

	int main() {
		int num, i, order = -1;
		scanf("%d", &num);
		
		for(i=0; i<INT_SIZE; i++) {
			if(1<<i & num)
				order = i;
			}

		if(order!=-1)
			printf("%d", order);
		else
			printf("no set bits");
		}
