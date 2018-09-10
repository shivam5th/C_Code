#include<stdio.h>
#include<stdlib.h>

int main() 
{
	FILE *fp;
	char i;
	int line=1;
	
	fp = fopen("fromcpy.txt","r");
	
	if(fp == NULL) 
	{
		printf("\n\nCannot open file!");
		exit(1);
	}
	
	printf("%2d.  ",line);
	
	while(i != EOF) 
	{
		i = fgetc(fp);
		printf("%c",i);
		
		if(i == '\n') 
		{
			line++;
			printf("%2d.  ",line);
		}
	}
	fclose(fp);
}
