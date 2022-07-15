#include <stdio.h>
#include <stdlib.h>
int a,*b,**c,***d;
void main(){
printf("Insira um valor: ");
scanf("%d",&a);
b=&a;
c=&b;
d=&c;
printf("O dobro: %d.\n",*b);
printf("O triplo: %d.\n",**c);
printf("O quadruplo: %d.\n",***d);
system("pause");
}

