#include <stdio.h>

int main()
{
	FILE *fs;
	int i, j, n, page = 0;
	char s;
	char fname[] = "texts/sourcc.txt";
	
	fs = fopen(fname, "rt");

	while (1) {
		for (i = 1; i <= 30; i++) {
			for (j = 1; j <= 90; j++) {
				if (i == 1 || i == 30 || j == 1 || j == 90) {
					printf("*");
				} else if((s = fgetc(fs)) != EOF) {
					if (i == 2) {
						printf("%-80sPage %-3d", fname, ++page);
					printf("*");
					break;
					}
					if (s == '\n') {

						for (int k = 0; k <= 89 - j; ++k)
							putchar(' ');
						printf("*");
						break;
					}
					putchar(s);
				} else {
					putchar(' ');
				}
			}
			printf("\n");
		}
		
		printf("Press Enter to continue to next page\n");
		
		char p;
		if ((p = getchar()) != '\n')
			break;
		if(s == EOF)
			break;
		printf("\033[32A");

	}
}
