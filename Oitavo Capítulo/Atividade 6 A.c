#include <stdio.h>
#include <stdlib.h>
int a,b,c[5][5],e,temp,i,j;
void matriz_a(int *i,int *j){
for(a=0;a<5;a++){
    for(b=0;b<5;b++){
        printf("Insira o valor[%d][%d]:",a+1,b+1);
        scanf("%d",&c[a][b]);
    }
}
}
void matriz(){
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%d ",c[j][i]);
        if(j==4){
            printf("\n");
        }
    }
}
}
void main(){
matriz_a(&i,&j);
matriz(i,j);
system("pause");
}
