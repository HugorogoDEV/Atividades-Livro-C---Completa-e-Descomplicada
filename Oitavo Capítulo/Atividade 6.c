#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float peso,altura,a;
float imc(float peso,float altura){
a=peso/pow(altura,2);
return a;
}
void main(){
printf("Insira peso e altura respectivamente:");
scanf("%f%f",&peso,&altura);
imc(peso,altura);
printf("O imc e: %f\n",a);
system("pause");
}
