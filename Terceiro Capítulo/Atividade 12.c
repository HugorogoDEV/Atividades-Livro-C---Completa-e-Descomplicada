#include <stdio.h>
#include <stdlib.h>
int main(){
int x;
printf("Digite um numero de 1 a 7, para ter o dia da semana.\n");
scanf("%d",&x);
switch(x){
case 1:
    printf("Segunda-feira.\n"); break;
case 2:
    printf("Terça-feira.\n"); break;
case 3:
    printf("Quarta-feira.\n"); break;
case 4:
    printf("Quinta-deira.\n"); break;
case 5:
    printf("Sexta-feira.\n"); break;
case 6:
    printf("Sabado.\n"); break;
case 7:
    printf("Domingo.\n"); break;
default:
    printf("Nao e domingo.\n"); break;
}
system("pause");
return 0;

}
