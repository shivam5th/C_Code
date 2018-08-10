#include<stdio.h>

int main()
{
	int pounds;

	printf("Enter the weight boy had lift\n");
	scanf("%d", &pounds);

	if(pounds<115)
		printf("The weight category is Flyweight\n");
	
	else if(pounds>=115 && pounds<=121)
		printf("The weight category is Bantamweight\n");
	
	else if(pounds>=122 && pounds<=153)
		printf("The weight category is Featherweight\n");
	
	else if(pounds>=154 && pounds<=189)
		printf("The weight category is Middleweight\n");
	
	else if(pounds>=190)
		printf("The weight category is Bantamweight\n");
	
	return 0;
}
