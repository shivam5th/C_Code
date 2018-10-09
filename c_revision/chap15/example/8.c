#include <stdio.h>
#include <string.h>

#define FOUND 1
#define NOTFOUND 0

int main()
{
	char *names[] = {
					"akshay",
					"parag",	
					"raman",
					"srinivas",
					"gopal",
					"rajesh"
				};
	
	int i, flag, a;
	char yourname[10];

	printf("\nEnter your name\n");
	scanf("%s", yourname);

	flag = NOTFOUND;

	for (i = 0 ; i <= 5 ; i++)
	{
		a = strcmp(names[i], yourname);
		if (a == 0) {
			printf("\nWelcome, you can enter the place\n");	
			flag = FOUND;
			break;
		}
	}
	if (flag == NOTFOUND) 
		printf("\nSorry, you are a trespasser\n");
}
