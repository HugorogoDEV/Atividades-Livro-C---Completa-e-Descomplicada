#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
float a,b,c;
char str[10];
printf("Insira um nome de producao: ");
gets(str);
printf("Insira o valor dele: ");
scanf("%f",&a);
b=a*9/10;
c=a/10;
printf("O valor da mercadoria, do total, do desconto e do produto vista sao respectivamente: %s, %f, %f, %f.\n",str,a,c,b);
system("pause");
return 0;
}
