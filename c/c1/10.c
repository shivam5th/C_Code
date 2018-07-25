#include<stdio.h>
int main()
{
	int popmen, popwomen, poplit, popilit, litmen, ilitmen, litwomen, ilitwomen;
	int totalpop = 80000;
	popmen = (52 * totalpop) / 100;
	popwomen = totalpop - popmen;
	poplit = (48 * totalpop) / 100;
	litmen = (35 * totalpop) / 100;
	litwomen = poplit - litmen;
	ilitmen = popmen - litmen;
	ilitwomen =  popwomen - litwomen;
	printf("The total population of the city: %d\n", totalpop);
	printf("The total number of illiterate men : %d\n",ilitmen);
	printf("The total number of illiterate women : %d\n", ilitwomen);

}
