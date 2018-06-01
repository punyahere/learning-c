//Q1. Find the lengthh of a string.

	#include <stdio.h>
	#define MAX_LENGTH 100

	int main() {
		int i, count=0;
		char text[MAX_LENGTH];
		gets(text);
		for(i=0; text[i]!='\0'; i++)
			count++;
		printf("%d", count);
		return 0;
		}
