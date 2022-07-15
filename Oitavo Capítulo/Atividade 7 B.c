#include <stdio.h>
#include <stdlib.h>
int c,d;
int funcao(int a,int b){
if(b>0){
    return a*funcao(a,b-1);
}
return 1;
}
void main(){
printf("Insira dois numeros x e y: ");
scanf("%d",&c);
scanf("%d",&d);
printf("Resultado da multiplicacao: %d.",funcao(c,d));
system("pause");
}
