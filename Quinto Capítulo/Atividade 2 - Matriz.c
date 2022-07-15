#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[4][4],b,i,j;
for(b=mat[1][1],i=1;i<4;i++){
    for(j=1;j<4;j++){
        printf("Imprima o valor para mat[%d][%d].\n",i,j);
        scanf("%d",&mat[i][j]);
        if(b<mat[i][j]){
            b=mat[i][j];
        }
    }
}
for(i=1;i<4;i++){
    for(j=1;j<4;j++){
        if(mat[i][j]==b){
            printf("O maior valor contido e: %d, e localizacao [%d]e[%d]\n",b,i,j);
        }
    }
}
system("pause");
return 0;
}
