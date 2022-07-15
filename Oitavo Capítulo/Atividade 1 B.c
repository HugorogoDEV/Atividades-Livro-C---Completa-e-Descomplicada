#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int b;
int funcao(int a){
if(a>0){
    return pow(a,3)+funcao(a-1);
}
}
void main(){
printf("Insira um numero: ");
scanf("%d",&b);
printf("A soma dos primeiros cubos: %d.\n",funcao(b));
system("pause");
}
