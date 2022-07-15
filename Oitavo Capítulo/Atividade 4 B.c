#include <stdio.h>
#include <stdlib.h>
int b;
void funcao(int a){
if(a>=0){
    printf("%d,",a);
    funcao(a-1);
}
}
void main(){
printf("Insira um valor: ");
scanf("%d",&b);
printf("Ordem decrescente ate 0: ");
funcao(b);
system("pause");
}
