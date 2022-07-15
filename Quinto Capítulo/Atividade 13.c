#include <stdio.h>
#include <stdlib.h>
int main(){
int A[10],a,b;
for(a=0;a<10;a++){
    printf("Insira o valor para o slot %d:\n",a);
    scanf("%d",&A[a]);
    for(b=a-1;b>-1;b--){
        if(A[a]==A[b]){
            printf("Digite outro valor:\n");
            scanf("%d",&A[a]);
            if(A[a]==A[b]){
                b+=1;
            }
        }
    }
}
printf("O array e composto por:\n");
for(a=0;a<10;a++){
    printf("%d.\n",A[a]);
}
system("pause");
return 0;
}
