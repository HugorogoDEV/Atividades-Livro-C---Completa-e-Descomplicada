#include <stdio.h>
#include <stdlib.h>
int b,c=0;
void funcao(int a){
if(c<=a){
    printf("%d,",c);
    c++;
    funcao(a);
}
}
void main(){
printf("Insira um numero: ");
scanf("%d",&b);
printf("Numero de 0 a %d: ",b);
funcao(b);
system("pause");
}
