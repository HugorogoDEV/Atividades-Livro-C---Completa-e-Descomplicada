#include <stdio.h>
#include <stdlib.h>
int b;
int funcao(int a){
if(a>0){
    return a+funcao(a-1);
}
}
void main(){
printf("Insira um numero: ");
scanf("%d",&b);
printf("O somatorio: %d.\n",funcao(b));
system("pause");
}
