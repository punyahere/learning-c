//Q. Enter two numbers and operate them against each other using all available mathematical operations in C.
//A.
	#include <stdio.h>
		int main(){
			
			int num1, num2;
			float div;
			
			printf("Enter two numbers, please: ");
			scanf("%d%d", &num1, &num2);

			printf("The sum of both numbers is: %d\n", num1+num2);
			printf("The difference of both numbers is: %d\n", num1-num2);
			printf("The product of both numbers is: %d\n", num1*num2);
			printf("The remainder on dividing both numbers is: %d\n", num1%num2);
		
			div = (float)num1/num2;

			printf("The quotient on dividing both numbers is: %f\n", div);
				}
