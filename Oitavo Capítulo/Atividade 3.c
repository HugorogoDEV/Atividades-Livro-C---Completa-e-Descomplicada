#include <stdio.h>
#include <stdlib.h>
float c,f;
float celsius(float f){
c=(f-32.0)*(5.0/9.0);
return c;
}
void main(){
printf("Insira um numero em fahrenheit:");
scanf("%f",&f);
celsius(f);
printf("Aqui ele eme Celsius: %f",c);
system("pause");
}
