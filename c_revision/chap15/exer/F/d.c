#include <stdio.h>
#define LEAP(yr) (!(yr%4))

int main()
{
	int j = 1, a = 7, i, x = 1, nod;
	int year, yr, month, m, mon, curr, next = 0;
	char months[12][10] = {"January", "February", "March", "April", "May", "June", 
		"July", "August", "September", "October", "November", "December"}; 
	
	printf("\nEnter the year : ");
	scanf("%d", &year);
	printf("\nEnter the month : ");
	scanf("%d", &month);
	
	for (yr = 1900; yr <= year; yr++) {
		if (yr < year)
			m = 12;
		else
			m = month;
		for (mon = 1; mon <= m; mon++) {
			if (mon == 2) {
				if (LEAP(yr))
					nod = 29;
				else
					nod = 28;
			} else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
				nod = 30;
			} else {
				nod = 31;
			}

			int i = 1;
			curr = next;
			
			while (i <= nod)
			{
				next++;
				i++;
				if (next == 7)
					next = 0;
			}
		}
	}
	
	j = 1, a = 7, i, x = 1;

	printf("\n\t\t%s", months[month-1]);
	printf("\t %d\n\n", year);
	printf("\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
	
	for (i = 1; x <= nod; i++) {
		for (j = 1; j <= 7; j++, curr--) {
			printf("%6d", x);
			
			if (x <= nod)
				x++;
			if (x > nod)
				break;
		}
		printf("\n\n");
		
		if (x > nod)
			break;
	}
	return 0;
}
