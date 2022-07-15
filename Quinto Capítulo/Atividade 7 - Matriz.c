#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[3][3],i,j,b;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Insira o valor de mat[%d][%d]:",i+1,j+1);
        scanf("%d",&mat[i][j]);
        if(i+j==2){
            b+=mat[i][j];
        }
    }
}
printf("A soma da diagonal secundaria e:\n%d\n",b);
system("pause");
return 0;
}
