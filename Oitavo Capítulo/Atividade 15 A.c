#include <stdio.h>
#include <stdlib.h>
int b,c[20],d,e,g;
void funcao(int *a,int *maior,int *menor,int w){
for(b=0;b<w;b++){
    if(a[b]>*maior){
        *maior=a[b];
    }
    if(a[b]<*menor){
        *menor=a[b];
    }
}
}
void main(){
printf("Insira um tamanho n:");
scanf("%d",&g);
for(b=0;b<g;b++){
    printf("Insira um numero: ");
    scanf("%d",&c[b]);
}
funcao(c,&d,&e,g);
printf("\nMenor numero: %d.\n",e);
printf("\nMaior numero: %d.\n",d);
system("pause");
}
