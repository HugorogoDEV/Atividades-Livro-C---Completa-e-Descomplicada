#include <stdio.h>
#include <stdlib.h>
/* Faça Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo.*/
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
