#include<stdio.h>

int main() 
{
	FILE *fp;
	char i;
	int line = 0;
	
	fp = fopen("IMG_0047.JPG","rb");
	
	if(fp == NULL) 
	{
		printf("\n\nCannot open file!");
		return(1);
	}
	
	printf("%2d.  ",line);
	
	while((i = fgetc(fp)) != EOF) 
	{
		line = 0;
		printf("%c",i);
		if(i == '\n') 
		{
			line++;
			printf("%2d.  ",line);
		}
	}
	fclose(fp);
}
