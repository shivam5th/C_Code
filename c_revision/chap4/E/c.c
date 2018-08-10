#include<stdio.h>

int main()
{
	int n1, n2, n3;

	printf("Enter three numbers\n");
	scanf("%d %d %d", &n1, &n2, &n3);

	(n1>n2 && n1>n3)?
		printf("The Biggest among all %d\n", n1):
	(n2>n1 && n2>n3)?
		printf("The Biggest among all %d\n", n2):
	(n3>n1 && n3>n2)?
		printf("The Biggest among all %d\n", n3):

		printf("Yahoo\n");

	return 0;

}
