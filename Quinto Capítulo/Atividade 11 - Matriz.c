#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[5][5],i,j,b=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("Insira um valor para mat[%d][%d]:",i+1,j+1);
        scanf("%d",&mat[i][j]);
    }
}
for(i=0;i<4;i++){
    for(j=i+1;j<5;j++){
        b+=mat[i][j];
    }
}
printf("A soma dos numeros acima da diagonal e:%d.\n",b);
system("pause");
return 0;
}
