#include <stdio.h>
#include <stdlib.h>
int main(){
int notas[10][3],i,j,A[10],a=0,b=0,c=0,d=0;
for(i=0;i<10;i++){
    for(j=0;j<3;j++){
        printf("Insira a nota do aluno %d na prova %d:\n",i+1,j+1);
        scanf("%d",&notas[i][j]);
    }}
    for(A[a]=0,i=0;i<10;i++,a++){
        for(j=0;j<2;j++){
            if(notas[i][j]<notas[i][j+1]){
                A[a]+=1;
            }
        }
        if(A[a]==0){
            b+=1;
        }
        if(A[a]==1){
            c+=1;
        }
        if(A[a]==2){
            d+=1;
        }
    }
    printf("O numero de alunos que tiveram menor nota no primeiro teste, no segundo e terceiro foram respectivamente: %d, %d e %d.\n",d,c,b);
}

