#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[3][3],a,b,i,j;
for(i=1;i<4;i++){
    for(j=1;j<4;j++){
        printf("Insira o valor para o mat[%d][%d].\n",i,j);
        scanf("%d",&mat[i][j]);}
}
for(b=mat[1][1],i=1;i<4;i++){
    for(j=1;j<4;j++){
        if(b>mat[i][j]){
           b=mat[i][j];}
    }
}
printf("O menor valor e:\n%d.\n",b);
system("pause");
return 0;
}
