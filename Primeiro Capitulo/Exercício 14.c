#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia três os caracteres do tipo char e depois os imprima um em cada linha.
 Use em um único comando printf() para isso. */

int main()
{
char a,b,c;
printf("Insira tres caracteres aqui serao as posicoes das cadeiras: ");
scanf("%c %c %c",&a,&b,&c);
printf("aqui esta um esquema de como estarão as cadeiras nomeadas: \n\n%c\n\n%c\n\n%c\n",a,b,c);
}
