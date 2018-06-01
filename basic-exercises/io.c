//Q. Perform standard input and output of all basic data types.
//A.

	#include <stdio.h>
		int main() {

			char charVar;
			unsigned char ucharVar;

			short shortVar;
			unsigned short ushortVar;

			int intVar;
			unsigned int uintVar;
	
			long longVar;
			unsigned long ulongVar;

			long long longlongVar;
			unsigned long long ulonglongVar;

			float floatVar;

			double doubleVar;
			long double ldoubleVar;


			printf("Enter a character: ");
			charVar = getchar();
			getchar();

			printf("Enter another character: ");
			ucharVar = getchar();
			getchar();


			printf("Enter a signed short value: ");
			scanf("%hi", &shortVar);

			printf("Enter an unsigned short value: ");
			scanf("%hu", &ushortVar);


			printf("Enter an integer: ");
			scanf("%d", &intVar);
	
			printf("Enter an unsigned integer value: ");
			scanf("%u", &uintVar);

	
			printf("Enter a signed long value: ");
			scanf("%ld", &longVar);
			
			printf("Enter an unsigned long value: ");
			scanf("%lu", &ulongVar);


			printf("Enter a signed long long value: ");
			scanf("%lld", &longlongVar);

			printf("Enter an unsigned long long value: ");
			scanf("%llu", &ulonglongVar);
	

			printf("Enter a float value: ");
			scanf("%f", &floatVar); 


			printf("Enter a double value: ");
			scanf("%lf", &doubleVar);

			printf("Enter a long double value: ");
			scanf("%Lf", &ldoubleVar);


			printf("You entered a character: %c\n", charVar);
			printf("You entered another character: %c\n", ucharVar);

			printf("You entered a short variable: %hi\n", shortVar);
			printf("You entered an unsigned short variable: %hu\n", ushortVar);
		
			printf("You entered an integer: %d\n", intVar);
			printf("You entered an unsigned integer: %u\n", uintVar);

			printf("You entered a long value: %ld\n", longVar);
			printf("You entered an unsigned long value: %lu\n", ulongVar);

			printf("You entered a long long value: %lld\n", longlongVar);
			printf("You entered an unsigned long long value: %llu\n", ulonglongVar);
		
			printf("You entered a float value: %f\n", floatVar);
			
			printf("You entered a double value: %lf\n", doubleVar);
			printf("You entered a long double value: %Lf\n", ldoubleVar);

		}
