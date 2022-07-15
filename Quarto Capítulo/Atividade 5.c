#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b=51,c,d;
for (a=1;b!=a;a++){
    c=2*a;
    printf("%d.\n",c);
}
printf("Soma final:\n");
d=(b-1)*(2*1+b-2);
printf("%d.\n",d);
system("pause");
return 0;
}
