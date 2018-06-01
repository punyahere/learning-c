//Q. Print primes within a given range.

	#include <stdio.h>

		void printPrimes(int lowerLimits, int upperLimits);
		int isPrime(int num);
		
		int main() {
			int lowerLimits, upperLimits;
			scanf("%d%d", &lowerLimits, &upperLimits);
			printPrimes(lowerlimits, upperlimits);
			return 0;
				}

		void printPrimes(int lowerLimits, int upperLimits) {
			while(lowerLimits<=upperLimits) {
				if(isPrime(lowerLimits))
					printf("%d, ", lowerLimits);
				lowerLimits++
				}
			}


		int isPrime(int num) {
				i=2;
			for(i=2; i=num/2; i++) {
				if(num % i ==0) 
					return 0;
				return 1;
			}
		}
