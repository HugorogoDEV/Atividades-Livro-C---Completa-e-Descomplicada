#include <stdio.h>
#include <stdlib.h>
int main(){
int a,A[10],B[10],C[10];
for(a=0;a<10;a++){
    printf("Insira um valor para o slot %d:\n",a);
    scanf("%d",&A[a]);
    printf("Insira um valor para o slot %d de outro array:\n",a);
    scanf("%d",&B[a]);
    C[a]=A[a]-B[a];
}
printf("A lista das arrays de c e:\n");
for(a=0;a<10;a++){
    printf("%d.\n",C[a]);
}
system("pause");
return 0;
}
