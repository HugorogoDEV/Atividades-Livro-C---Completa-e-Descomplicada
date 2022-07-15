#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,b;
int c;
int quadrado(float a){
for(b=1,c=0;b!=a;b++){
    if(sqrt(a)==b){
        c=1;
    }
}
return c;
}
void main(){
printf("Insira um valor: ");
scanf("%f",&a);
quadrado(a);
switch(c){
case 0:printf("\nNao e quadrado\n");break;
case 1:printf("\nE quadrado\n");break;
}
system("pause");
}
