#include <stdio.h>
#include <stdlib.h>
float x,y,z;
char w;
float operacao(float x,float y,char w){
switch(w){
case '+':z=x+y;break;
case '-':z=x-y;break;
case '*':z=x*y;break;
case '/':z=x/y;break;
}
return z;
}
void main(){
printf("Insira dois numeros e um sinal:");
scanf("%f %f %c",&x,&y,&w);
operacao(x,y,w);
printf("Resultado: %f",z);
system("pause");
}
