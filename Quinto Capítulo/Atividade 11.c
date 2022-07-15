#include <stdio.h>
#include <stdlib.h>
int main(){
int a,A[10],B[10];;
for(a=0;a<10;a++){
    printf("Insira um valor para o slot %d:\n",a);
    scanf("%d",&A[a]);
    B[a]=pow(A[a],2);
}
for(a=0;a<10;a++){
    printf("Para o slot %d, os valores dos conjuntos A e B sao respectivamente: %d, %d.\n",a, A[a],B[a]);
}
system("pause");
return 0;
}
