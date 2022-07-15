#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa  que leia três variáveis: char, int e float.
 Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e um em cada linha.
 Use um único comando printf() para cada operação de escrita das três variáveis. */

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
