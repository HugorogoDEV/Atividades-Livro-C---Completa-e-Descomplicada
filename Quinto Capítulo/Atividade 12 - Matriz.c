#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[6][6],i,j,a;
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
        printf("Insira o valor de mat[%d][%d]:",i+1,j+1);
        scanf("%d",&mat[i][j]);
    }
}
for(j=0;j<5;j++){
    for(i=j+1;i<6;i++){
        a+=mat[i][j];
    }
}
printf("A soma dos numeros e: %d.\n",a);
system("pause");
return 0;
}
