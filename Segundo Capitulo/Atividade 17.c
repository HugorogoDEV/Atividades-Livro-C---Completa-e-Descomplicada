#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia um n�mero inteiro e mostre o seu completo bit a bit.*/
int main()
{
    unsigned char x,y;
    printf("insira aqui um n�mero: \n");
    scanf("%d",&x);
    y = ~x;
    printf("Complemento dele �: %d\n",y);
    system("pause");
    return 0;
}
