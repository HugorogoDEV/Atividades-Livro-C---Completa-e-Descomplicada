#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que receba a aaltura e o sexo de uma pessoa e calcule se peso ideal */
int main()
{
 float a,b,c;
 char d;
 printf("qual e a sua altura e seu sexo: \n");
 scanf("%f%c",&a,&d);
 b = (727 / 10) * a - 58;
 c = (621 / 10) * a - 447 / 10;
 if(d = "masculino"){
    printf("Seu peso ideal e %f.\n",b);}
else{
 if(d = "feminino"){
    printf("Seu peso ideal e %f .\n",c);};};
 system("pause");
 return 0;
}
