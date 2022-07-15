#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c,d;
printf("Insira um numero.\n");
scanf("%d",&a);
printf("Esse sao os numeros naturais impares entre eles.\n");
for(c=1;c!=a+1;c++){
    d=(2*c)-1;
    printf("%d.\n",d);}
system("pause");
return 0;
}
