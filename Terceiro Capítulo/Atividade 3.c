#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia um número e verifique se esse numero é par ou impar.*/
int main()
{
    int x;
    printf("Insira um numero inteiro: \n");
    scanf("%d",&x);
    x%=2;
    if(x==0){
        printf("O numero e par.\n");}
    else{
        printf("O numero e impar.\n");}
    system("pause");
    return 0;
}
