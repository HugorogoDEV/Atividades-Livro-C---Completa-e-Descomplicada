#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia um número inteiro e mostre o seu completo bit a bit.*/
int main()
{
    unsigned char x,y;
    printf("insira aqui um número: \n");
    scanf("%d",&x);
    y = ~x;
    printf("Complemento dele é: %d\n",y);
    system("pause");
    return 0;
}
