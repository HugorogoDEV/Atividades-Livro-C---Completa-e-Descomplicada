#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa  que leia tr�s vari�veis: char, int e float.
 Em seguida, imprima-as de tr�s maneiras diferentes: separadas por espa�os, por uma tabula��o horizontal e um em cada linha.
 Use um �nico comando printf() para cada opera��o de escrita das tr�s vari�veis. */

 int main()
 {
 char x;
 int y;
 float z;
 printf("Insira nessa ordem primeira letra do seu nome, primeiro numero da sua idade, e sua estatura: ");
 scanf("%c%d%f",&x,&y,&z);
 printf("aqui elas estao separadas por espaco: %c %d %f\n",x,y,z);
 printf("aqui elas estao separadas por tabulacoes horizontais: \n%c\t%d\t%f\n",x,y,z);
 printf("aqui elas estao separadas por linhas: \n%c\n%d\n%f\n",x,y,z);
 }
