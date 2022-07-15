#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso.
 Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos. */

int main()
{
    float x,y;
    printf("Insira dois valores do tipo float: ");
    scanf("%f%f",&x,&y);
    printf("Ordem inversa dos valores do tipo float: %f%f", y,x);
}
