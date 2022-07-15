#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int r;
float v,a;
void esfera(int *r,float *a,float *v){
*v=(4*M_PI*pow(*r,3))/3;
*a=4*M_PI*pow(*r,2);
}
void main(){
printf("Insira o valor do raio:");
scanf("%d",&r);
esfera(&r,&a,&v);
printf("O volume: %f\nA arca: %f\n",v,a);
system("pause");
}
