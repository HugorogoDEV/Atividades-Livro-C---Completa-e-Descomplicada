#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[10][10],i,j,a;
for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
        if(i<j){
            mat[i][j]=2*i+7*j-2;
        }
        if(i==j){
            mat[i][j]=3*i*i-1;
        }
        if(i>j){
            mat[i][j]=4*i*i*i+5*j*j+1;
        }
        printf("%d ",mat[i][j]);
        if(j==10){
        printf("\n");
        }
    }
}
system("pause");
return 0;
}
