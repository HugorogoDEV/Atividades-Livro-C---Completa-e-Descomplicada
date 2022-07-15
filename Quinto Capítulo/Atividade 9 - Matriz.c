#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[3][3],i,j,a,vet[3];
for(i=0;i<3;i++){
    vet[j]=0;
    for(j=0;j<3;j++){
        printf("Insira o valor de mat[%d][%d]:",i+1,j+1);
        scanf("%d",&mat[i][j]);
        vet[j]+=mat[i][j];}}
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d ",mat[i][j]);
                if(j==2){
                    printf("\n");}}}
                    for(i=0;i<3;i++){
                        printf("%d ",vet[i]);
                    }
                system("pause");
                return 0;
                }
