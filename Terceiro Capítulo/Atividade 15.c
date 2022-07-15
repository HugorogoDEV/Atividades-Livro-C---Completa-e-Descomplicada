#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int a,b,c,d;
float e,x,y;
x=(-b+sqrt(d))/2*a;
d=(pow(b,2))+(-4)*a*c;
y=(-b-sqrt(d))/2*a;
printf("Digite os coeficientes numericos.\n");
scanf("%d%d%d",&a,&b,&c);
switch(a){
    case 0:{
    printf("Nao e equaçao de segundo grau.\n"); break;}
    default:{
    switch(("%d",d)){
    case "%d"<0:
    printf("Nao existe raiz.\n"); break;
    case "%d">0:
    printf("%f.\n",x);
    printf("%f.\n",y);break;
    default:
    printf("%f.\n",x);
    printf("Raiz unica.\n");
    }}}
    system("pause");
    return 0;
}
