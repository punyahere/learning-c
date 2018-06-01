//Q2. Find the diameter, circumference and area of circle.

#include <stdio.h>
#include <math.h>
	double getDiameter(double radius);
	double getArea(double radius);
	double getCircumference(double radius);
	int main() {
		float radius, dia, area, circum;
		scanf("%f", &radius);
		dia = getDiameter(radius);
		area = getArea(radius);
		circum = getCircumference(radius);
		printf("Diameter = %.2f, area = %.2f and circumference = %.2f", dia, area, circum);
			}
	double getDiameter(double radius) {
		return (radius * 2);
			}
	double getArea(double radius) {
		return (M_PI * radius * radius);
			}
	double getCircumference(double radius) {
		return (2 * M_PI * radius);
			}
