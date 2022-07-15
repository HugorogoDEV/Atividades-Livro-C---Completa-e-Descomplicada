#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float v,raio;
float esfera(float raio){
v=(4.0/3.0)*M_PI*pow(raio,3);
return v;
}
void main(){
printf("Insira o valor de um raio de uma esfera:");
scanf("%f",&raio);
esfera(raio);
printf("Seu volume: %f",v);
system("pause");
}
