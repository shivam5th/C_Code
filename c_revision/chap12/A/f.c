#include <stdio.h>

int main()
{
	FILE *fp;
	char names[20];
	int i;

	fp = fopen("amit.txt", "w");

	for(i=0; i<=10; i++)
	{
		puts("\nEnter name:");	
		scanf("%s", names);

		fwrite(names, sizeof (names),1, fp);
	}
	close(fp);
	return 0;
}
