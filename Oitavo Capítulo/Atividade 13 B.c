#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float z;
float w;
float funcao(float a,float b){
if(a>0){
    b=(1+pow(a,2))/a;
    return b+funcao(a-1,b);
}
return 0;
}
void main(){
printf("Insira o numero: ");
scanf("%f",&z);
printf("%f\n",funcao(z,w));
system("pause");
}
