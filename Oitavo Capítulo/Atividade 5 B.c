#include <stdio.h>
#include <stdlib.h>
int a,g[20],c,d,w=0;
int funcaos(int *f,int e){
if(f[e]!='\0'){
    return f[e]+funcaos(f,e+1);}
}
void main(){
printf("Ensira o tamanho do array: ");
scanf("%d",&d);
for(c=0;c<d;c++){
    printf("Insira o valor: ");
    scanf("%d",&g[c]);
}
printf("\nSomatorio: %d.\n",funcaos(g,0));
system("pause");
}
