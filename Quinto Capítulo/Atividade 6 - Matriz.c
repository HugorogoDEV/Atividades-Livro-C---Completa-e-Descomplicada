#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[4][4],i,j,b=0;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("Insira o valor mat[%d][%d]:",i+1,j+1);
        scanf("%d",&mat[i][j]);
        if(i==j){
            b+=mat[i][j];
        }
    }
}
printf("A soma da diagonal principal e:\n%d\n",b);
system("pause");
return 0;
}
