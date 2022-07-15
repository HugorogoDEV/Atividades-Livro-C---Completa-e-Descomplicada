#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c,d,n,r;
printf("A soma dos multiplos de 3 ou 5 abaixo de 1000 é:\n");
r=3;
n=333;
a=n*(r+((n-1)*r)/2);
r=5;
n=199;
b=n*(r+((n-1)*r)/2);
r=15;
n=66;
c=n*(r+((n-1)*r)/2);
d=a+b-c;
printf("%d.\n",a);
printf("%d.\n",b);
printf("%d.\n",c);
printf("%d.\n",d);
system("pause");
return 0;
}
