#include <stdio.h>
#include <stdlib.h>
/* Leia um valor que representa uma temperatura em graus celsius e apresente-a convertida em graus Fahrenheit.
 A f�rmula de convers�o �: F = C *(9.0/5.0) + 32.0, sendo F a temperatura em Fahreinheit e a temperatura em Celsius. */

int main()
{
    float f,c;
    printf("Insira aqui uma temperatura em graus que ela aparecer� em Fahreinheit: \n");
    scanf("%f", &c);
    f = c *(9.0/5.0) + 32.0;
    printf("A convers�o para Fahrenheit fica : \n%f\n", f);
    system("pause");
    return 0;
    }
