#include <stdio.h>
#include <stdlib.h>
int dou,d[6][6];
void soma(int m[][6],int a,int *soma){
int i,j,k=1;
for(i=0;i<6;i++){
    for(j=0;j<a;j++){
        m[i][j]=k;
        k+=1;
        if((i==j)||(i+j==5)){
            *soma+=m[i][j];
        }
    }
}
}
void main(){
soma(d,6,&dou);
printf("Soma dois diagonais: %d\n",dou);
system("pause");
}
