#include <stdio.h>

int main()
{
	FILE *fs1, *fs2, *ft;
	char ch;
	int f1 = 1, f2 = 1, counter = 1;
	
	fs1 = fopen("txt1.txt", "r");
	fs2 = fopen("txt2.txt", "r");
	ft = fopen("Allthebest.txt", "w");

	while(1)
	{
		if(counter == 1 || f2 == 0)
		{
		   	ch = fgetc(fs1);
			
			if(ch == EOF)
				f1 = 0;
			
			if(ch == '\n' || ch == 46)
				counter = 2;
			
			if(f1 != 0)
				fputc(ch,ft);
		}
		
		if(counter == 2 || f1 == 0)
		{
			ch = fgetc(fs2);
			
			if(ch == EOF)
				f2 = 0;
			
			if(ch == '\n' || ch == 46)
				counter = 1;
			
			if(f2 != 0)
				fputc(ch,ft);
			
			if(f1 == 0 && f2 == 0)
				break;
		}
	}

	fclose(fs1);
	fclose(fs2);
	fclose(ft);
}
