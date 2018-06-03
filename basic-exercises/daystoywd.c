//Q. Program to convert days into years->weeks->days.
//A. 
		#include <stdio.h>
			int main() {
				int days, years, weeks;
				printf("Enter days: ");	
				scanf("%d", &days);
				
				years = (days/365);
				weeks = (days % 365 ) / 7;
				days = days - ((years * 365) + (weeks * 7));

		printf("Years: %d", years);
		printf("Weeks: %d", weeks);
		printf("Days: %d",  days);
			}
