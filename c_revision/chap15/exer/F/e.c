#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE    1
#define FALSE   0

int getDaysInMonth(int, int);
int firstDayOfMonth(int, int);
void showCalMonth(int, int, int, int);

int getDaysInMonth(int month, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month != 2)
		return days_in_month[month - 1];
	else if(year % 4 == FALSE && year % 100 != FALSE || year % 400 == FALSE)
		return 29;
	else
		return 28;
}

int firstDayOfMonth(int month, int year)
{
	int daycode;
	int d1, d2, d3;
	
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	for (int i = 1; i < month; ++i)
                daycode += getDaysInMonth(i, year);
        daycode = daycode % 7;
	return daycode;

}

void showCalMonth(int month, int year, int dayOne, int totaldays)
{
	char *months[] = {
		"January", "February", "March", "April", "May", "June", "July", "August", 
		"September", "October", "November", "December"
	};
	printf("\t\t%s, %d\n", months[month-1], year);
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat");
	
	for (int i = 0; i < dayOne + totaldays; i++) {
		(i % 7) ? 0 : putchar('\n');

			if (i >= dayOne)
				printf("%2d\t", i - dayOne + 1);
			else
				printf("\t");
		}
		putchar('\n');
}
int main()
{
	int month, year;
	char key;

	printf("Enter month and year to see the calander\n");
	scanf("%d %d", &month, &year);
	
	while (1) {
		int totaldays = getDaysInMonth(month, year);
		int dayOne = firstDayOfMonth(month, year);

		showCalMonth(month, year, dayOne, totaldays);

		printf("Press 'w' for Nextyear same month, 's' for Previous year same month\n");
                printf("Press 'a' for Sameyear previous month, 'd' for same year next month\n");
		printf("Press 'q' to quit from the calander\n");
                scanf(" %c", &key);
		
		switch (key) {
			case 'd':
				++month;
				if (month == 13) {
					month = 1;
					++year;
				}
				break;
			case 'a':
				--month;
				if (month == 0) {
					month = 12;
					--year;
				}
				break;
			case 'w':
				++year;
				break;
			case 's':
				--year;
				break;
			case 'q' :
				return 0;
				break;
			default:
				printf("Exiting..\n");
				exit(1);
		}
		if (year == 0)
			exit(1);
	}
	return 0;

}

