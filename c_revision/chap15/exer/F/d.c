#include <stdio.h>
#define LEAP (!(yr%4))

int main()
{
	int j = 1, a = 7, i, x = 1, nod;
	int year, yr, month, m, mon, curr, next = 0;
	
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
				if (LEAP)
					nod = 29;
				else
					nod = 28;
			}
			else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
				nod = 30;
			else
				nod = 31;
			
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
	
	if (month == 1)
	printf("\n\t\tJanuary");
	
	if (month == 2)
	printf("\n\t\tFebraury");
	
	if (month == 3)
	printf("\n\t\tMarch");
	
	if (month == 4)
	printf("\n\t\tApril");
	
	if (month == 5)
	printf("\n\t\tMay");
	
	if (month == 6)
	printf("\n\t\tJune");
	
	if (month == 7)
	printf("\n\t\tJuly");
	
	if (month == 8)
	printf("\n\t\tAugust");
	
	if (month == 9)
	printf("\n\t\tSeptember");
	
	if (month == 10)
	printf("\n\t\tOctober");
	
	if (month == 11)
	printf("\n\t\tNovember");
	
	if (month == 12)
	printf("\n\t\tDecember");
	printf("\t %d\n\n", year);
	printf("\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
	
	for (i = 1; x <= nod; i++) {
		for (j = 1; j <= 7; j++, curr--) {
			if (x>9)
				printf("    ");
			else
				printf("     ");
			
			if (curr>0)
				printf(" ");
			
			else
			{
				printf("%d", x);
				
				if (x <= nod)
					x++;
				if (x>nod)
					break;
			}
		}
		printf("\n\n");
		
		if (x>nod)
			break;
	}
	return 0;
}
