#include <stdio.h>
#include <stdlib.h>
int a,*b,**c,***d;
void main(){
printf("Insira um valor: ");
scanf("%d",&a);
b=&a;
c=&b;
d=&c;
printf("O dobro: %d.\n",(*b)*2);
printf("O triplo: %d.\n",(**c)*3);
printf("O quadruplo: %d.\n",(***d)*4);
system("pause");
}
