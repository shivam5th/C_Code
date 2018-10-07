#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
	float n, m, result;
	char opr[20];
	
	if (argc != 4) {
		puts("Improper number of arguments\n");
                printf("Write like this : ");
                printf("\"calc\" \"operator\" ");
                printf("\"number1\" \"number2\"\n");
                exit(1);
        }
	
	strcpy(opr, argv[1]);
	n = atof(argv[2]);
	m = atof(argv[3]);
	
	switch(opr[0]) {
	    case '+':
		    result = n + m;
		    printf("Result is: %.2f %c %.2f = %.2f\n", n, opr[0], m, result);
		    break;

	    case '-':
		    result = n - m;
		    printf("Result is: %.2f %c %.2f = %.2f\n", n, opr[0], m, result); 
		    break;

	    case 'x':
                    result = n * m;
                    printf("Result is: %.2f %c %.2f = %.2f\n", n, opr[0], m, result);
		    break;

	    case '/':
		    result = n / m;
		    printf("Result is: %.2f %c %.2f = %.2f\n", n, opr[0], m, result);
		    break;

	    case '%':
		    result = fmod(n,m);
		    printf("Result is: %.2f %c %.2f = %.2f\n", n, opr[0], m, result);
		    break;

	    case '<':
		    if(n < m)
			    printf("True\n");
		    else
			    printf("False\n");
		    break;

	    case '>':
		    if(n > m)
			    printf("True\n");
		    else
			    printf("False\n");
		    break;
	    
	    case '=':
		    if (n == m)
			    printf("True\n");
		    else
			    printf("False\n");
		    break;
	    case '*':
		    result = n * m;
		    printf("Result is %.2f :\n", result);
		    break;
	    default:
		    printf("Invalid Operator!!!\n");
		    return -1;
	}
	return 0;
}
