#include <stdio.h>
#include <stdlib.h>
/* Fa�a Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de
um empr�stimo.*/
int main()
{
    float x,y,z;
    printf("Salario e valor de empretimo respectivmaente: \n");
    scanf("%f%f",&x,&y);
    z = x * 20 / 100;
    if(y>z){
        printf("Emprestimo nao concedido.\n");}
    else{
        printf("Emprestimo concedido.\n");}
    system("pause");
    return 0;
    }
