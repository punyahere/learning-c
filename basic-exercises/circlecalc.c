//Q. Find the circumference, diameter and area of a circle

	#include <stdio.h>
	#include <math.h> //For M_PI

		int main() {
			int radius, circum, dia, area;
			printf("Please enter the radius of the circle: ");
			scanf("%d", &radius);
			dia = radius * radius;
			circum = 2*M_PI*radius;
			area = M_PI*radius*radius;
	
			printf("The dia is %d", dia);
			printf("The circum is %d", circum);
			printf("The area is %d", area);
				}
