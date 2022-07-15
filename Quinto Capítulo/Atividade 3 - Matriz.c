#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[5][5],i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if(i==j){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
        if(j==5){
            printf("\n");
        }
    }
}
}
