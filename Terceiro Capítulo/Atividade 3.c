#include <stdio.h>
#include <stdlib.h>
/* Fa�a um programa que leia um n�mero e verifique se esse numero � par ou impar.*/
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
