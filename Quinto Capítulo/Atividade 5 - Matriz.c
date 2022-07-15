#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[4][4],i,j,b;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("Insira o valor de mat[%d][%d]:",i+1,j+1);
        scanf("%d",&mat[i][j]);
        if(mat[i][j]<0){
            b+=1;
        }
    }
}
printf("A matriz possui %d valores negativos.\n",b);
system("pause");
return 0;
}
