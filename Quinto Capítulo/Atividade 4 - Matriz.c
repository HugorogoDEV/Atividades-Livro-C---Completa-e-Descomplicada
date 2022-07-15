#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[4][4],i,j,a=0;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("Insira o valor para mat[%d][%d];\n",i,j);
        scanf("%d",&mat[i][j]);
        if(mat[i][j]>10){
            a+=1;
        }
    }
}
printf("A quantidade de vlaores maiores que 10 e:\n%d\n",a);
system("pause");
return 0;
}
