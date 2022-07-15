#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,A[10];
for(a=0;a<10;a++){
    printf("Insira um valor para ocupar a posicao %d:\n",a);
    scanf("%d",&A[a]);
}
for(a=0;a<10;a++){
    for(b=9;b!=a;b--){
        if(A[a]==A[b]){
            printf("Na lista ha o elemento %d repetido.\n",A[a]);
        }
    }
}
system("pause");
return 0;
}
