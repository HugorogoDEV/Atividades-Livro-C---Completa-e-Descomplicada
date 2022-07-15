#include <stdio.h>
#include <stdlib.h>
float a,b,c,e;
char d;
float media(float a,float b,float c,char d){
switch(d){
case 'a':e=(a+b+c)/3;return e;break;
case 'e':e=(a*5+b*3+c*2)/(5+3+2);return e;break;
}
}
void main(){
printf("Insira 3 numero e 1 letra:");
scanf("%f %f %f %c",&a,&b,&c,&d);
media(a,b,c,d);
printf("A media e: %f",e);
system("pause");
}
