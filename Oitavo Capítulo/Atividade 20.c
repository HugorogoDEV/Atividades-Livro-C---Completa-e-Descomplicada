#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,c[];
int b;
float fatorial(float a){
if(a>0){
    return a*fatorial(a-1);
}
else return 1;
}
float somatorio(int b){
if(b>0){
    c[b]=1/fatorial(b);
    return c[b]+somatorio(b-1);
}
else return 1;
}
void main(){
printf("Insira um numero: ");
scanf("%d",&b);
printf("\nO somatorio de e=%f.\n",somatorio(b));
system("pause");
}
