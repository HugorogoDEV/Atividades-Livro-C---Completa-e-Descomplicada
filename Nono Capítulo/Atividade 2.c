#include <stdio.h>
#include <stdlib.h>
void main(){
double a,b,*c,*d;
printf("Insira dois numeros: ");
scanf("%d",&a);
scanf("%d",&b);
c=&a;
d=&b;
if(c>d){
    printf("conteudo do maior: %d.\n",*c);
}
else
    printf("Conteudo do maior: %d.\n",*d);
system("pause");
}
