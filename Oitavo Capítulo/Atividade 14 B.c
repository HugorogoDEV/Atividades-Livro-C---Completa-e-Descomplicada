#include <stdio.h>
#include <stdlib.h>
int funcao(int *a,int w,int menor){
if(a[w]!='\0'){
if(menor>a[w]){
    menor=a[w];
}
funcao(a,w+1,menor);}
return menor;}
void main(){
int z,y[50],g;
printf("Insira o tamanho: ");
scanf("%d",&z);
z-=1;
for(;z>=0;z--){
    printf("Insira um valor: ");
    scanf("%d",&y[z]);
    fflush(stdin);
}
z=1;
printf("O menor valor e: %d.\n",funcao(y,z,y[0]));
system("pause");
}
