#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
int A[8];
for(a=0;a<8;a++){
    printf("Insira o valor do slot %d:\n",a);
    scanf("%d",&A[a]);
}
printf("Insira um valor:\n");
scanf("%d",&A[1]);
printf("Insira um valor:\n");
scanf("%d",&A[4]);
a=A[1]+A[4];
printf("Soma de X e Y:\n%d\n",a);
system ("pause");
return 0;
}
