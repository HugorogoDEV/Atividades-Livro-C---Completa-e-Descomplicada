#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia tr�s os caracteres do tipo char e depois os imprima um em cada linha.
 Use em um �nico comando printf() para isso. */

int main()
{
char a,b,c;
printf("Insira tres caracteres aqui serao as posicoes das cadeiras: ");
scanf("%c %c %c",&a,&b,&c);
printf("aqui esta um esquema de como estar�o as cadeiras nomeadas: \n\n%c\n\n%c\n\n%c\n",a,b,c);
}
