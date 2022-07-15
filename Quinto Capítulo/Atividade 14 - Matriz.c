#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[5][5],i,j,a=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("Insira o valor de mat[%d][%d]:",i+1,j+1);
        scanf("%d",&mat[i][j]);
        a+=mat[i][j];
        if(i==j){
            a-=2*mat[i][j];
        }
        if(i+j==4){
            a-=2*mat[i][j];
            if(i==2){
                a+=2*mat[i][j];
            }
        }
    }
}
printf("A soma dos valores nao pertencentes as diagonais e: %d\n",a);
system("pause");
return 0;
}
