#include <stdio.h>
#include <stdlib.h>
int a,b,d[50],g,h;
void funcao(int *c,int *e,int *f){
for(b=0;b<a;b++){
    if(*e<d[b]){
        *e=d[b];
    }
    if(b==a-1){
        for(b=0;b<a;b++){
            if(d[b]==*e){*f+=1;}
        }
    }
}
}
void main(){
printf("Insira o tamanho do vetor: ");
scanf("%d",&a);
for(b=0;b<a;b++){
    printf("Insira um numero: ");
    scanf("%d",&d[b]);
}
funcao(d,&g,&h);
printf("O maior numero: %d.\nSuas repeticoes: %d.\n",g,h);
system("pause");
}
