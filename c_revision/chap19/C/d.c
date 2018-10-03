#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs, *ft;
	char ch;

	struct student
	{
		char name[40];	
		int age;
	};

	struct student a;
	char studentname[40];
	long int recsize;

	fp = fopen("texts/records.txt", "r+");

	if(fp == NULL)
	{
		puts("cannot open file");	
		exit(1);
	}

	recsize = sizeof(a);
}
