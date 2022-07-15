#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos
separados por uma barra (/). */

int main()
{
    int dia, mes, ano;
    printf("insira o valor dia, mes e ano: ");
    scanf("%d%d%d",&dia,&mes,&ano);
    printf("os valores inseridos com uma barra entre eles: %d/%d/%d",dia,mes,ano);
}
