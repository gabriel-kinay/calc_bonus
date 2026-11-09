#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

int main()
{

	int number1;
	int number2;
	char operator;
	printf("1er nombre");
	scanf("%d", &number1);
	printf("2eme nombre");
	scanf("%d", &number2);
	printf("choisissez un signe");
	scanf("%c", &operator);
        if(operator == '-')
        {
                int resultat = number1 - number2;
                printf("%d %c %d = %d\n", number1, operator, number2, resultat);
        }
        else if(operator == '*')
        {
                int resultat = number1 * number2;
                printf("%d %c %d = %d\n", number1, operator, number2, resultat);
        }
        else if(operator == '/')
        {
                if(number2 == 0)
                {
                        printf("Il est impossible de diviser par 0\n");
                }
                else
                {
                        double resultat = (double)number1 / (double)number2;
                        printf("%d %c %d = %.2f\n", number1, operator, number2, resultat);
                }
        }
        else if(operator == '%')
        {
                if(number2 == 0)
                {
                        printf("Il est impossible de diviser par 0\n");
                }
                else
                {
                        int resultat = number1 % number2;
                        printf("%d %c %d = %d\n", number1, operator, number2, resultat);
                }
        }
        else
        {
                printf("L'opérateur %c n'est pas pris en charge\n.", operator);
        }

        return(0);
}
