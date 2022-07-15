#include <stdio.h>
#include <stdlib.h>
int main(){
int matA[5][5],i,j,matB[5][5],n;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("Insira o valor de matA[%d][%d]:",i+1,j+1);
        scanf("%d",&matA[i][j]);
    }
}
printf("A matriz B e:\n");
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        for(n=0,matB[i][j]=0;n<5;n++){
            matB[i][j]+=matA[i][n]*matA[n][j];
        }
            printf("%d ",matB[i][j]);
        if(j==4){
            printf("\n");
        }
    }
}
system("pause");
return 0;
}
