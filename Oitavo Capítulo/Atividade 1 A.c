#include <stdio.h>
#include <stdlib.h>
float a;
int b,c;
void funcao(float *a){
if(b==0){
    c=*a;
    *a-=c;
    printf("parte fracionaria: %f",*a);
    b=1;
    funcao(b);
}
else
    printf("\nparte inteira:%d\n",c);
}
void main(){
printf("Insira um numero real:");
scanf("%f",&a);
funcao(&a);
printf("\n");
system("pause");
}
