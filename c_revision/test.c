#include <stdio.h>

int main()
{
	FILE *fs, *ft;
	char ch;
	int temp = -1;

	fs = fopen("fromcpy.txt", "r");
	ft = fopen("letsok.txt", "w");
	
	while(ch != EOF)
	{
		ch = fgetc(fs);
		
		if(ch == '\n')
		{
			temp = temp*(-1);	
			
			if(temp == -1)
				fputc('\n', ft);
		}
		else if(temp == 1)
		{
			fputc(ch, ft);
		}
	}
	printf("File copied successfully\n");
	
	fclose(fs);
	fclose(ft);

	return 0;
}
