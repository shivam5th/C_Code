#include <stdio.h>
#include <stdlib.h>

int main()
{
        FILE *fs, *ft;
        char ch;
	int i = 0;

        fs = fopen("fromcpy.txt", "r");
        ft = fopen("output.txt", "w");

        while(ch != EOF)
        {
                ch = fgetc(fs);

                if(ch == EOF)
			break;
		
		if(ch == '\n')
		{
			i++;
			//fprintf(ft, "%d", i);
			fprintf(ft, "%d", i);
		}
		fputc(ch, ft);
	}
	printf("File copied successfully\n");

        fclose(fs);
        fclose(ft);

        return 0;
}
