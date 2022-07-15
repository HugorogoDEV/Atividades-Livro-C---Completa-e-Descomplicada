#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que calcule o ano de nascimento de uma pessoa apartir de sua idade e do ano atual */
int main()
{
    int x,z;
    printf("Insira aqui sua idade para descobrir o ano em que nasceu: \n");
    scanf("%d",&x);
    printf("Seu ano de nascimento é: \n");
    z = 2021 - x;
    printf("z = %d\n",z);
    system("pause");
    return 0;
}
