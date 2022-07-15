#include <stdio.h>
#include <stdlib.h>
int main(){
int X[10];
int a,b=X[0];
for(a=0;a<10;a++){
    printf("Insira o valor do slot %d:\n",a);
    scanf("%d",&X[a]);}
printf("O maior valor e:\n");
for(a=0;a<10;a++){
    if(b<X[a]){
        b=X[a];
    }
}
printf("%d.\n",b);
printf("O menor valor e:\n");
for(a=0;a<10;a++){
    if(b>X[a]){
        b=X[a];
    }
}
printf("%d.\n",b);
system("pause");
return 0;
}
