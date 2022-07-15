#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float altura,raio,c;
float volume(float altura, float raio){
c=M_PI*pow(raio,2)*altura;
return c;
}
void main(){
printf("Insira altura e raio respectivamente:");
scanf("%f%f",&altura,&raio);
volume(altura,raio);
printf("\nO volume e: %f\n",c);
system("pause");
}
