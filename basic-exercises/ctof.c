//Q. C program to convert celsius to fahrenheit.

		#include <stdio.h>
			int main() {
				float celsius, fahrenheit;
				printf("Enter Celsius temp: ");
				scanf("%f", &celsius);
				fahrenheit = (celsius * 9 / 5) + 32;
				printf("%.2f Fahrenheit is the temp", celsius);
return 0;

					}
