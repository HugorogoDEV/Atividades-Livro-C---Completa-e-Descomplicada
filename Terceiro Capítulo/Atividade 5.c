#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: */
int main()
{
    int x,y;
    printf("digite um numero: \n");
    scanf("%d",&x);
    if(x>0){
        y=pow(x,2);
    printf("O numero ao quadrado: %d\n",y);
    y=sqrt(x);
    printf("A raiz quadrada: %d\n",y);}
    else{
        printf("O numero nao e positivo.\n");}
    system("pause");
    return 0;
}
