#include <stdio.h>
#include <stdlib.h>
int a;
int produtorio(int a){
if(a>0){
    return a*produtorio(a-1);
}
else return 1;
}
void main(){
printf("Insira um valor:");
scanf("%d",&a);
printf("Seu produtorio: %d.\n",produtorio(a));
system("pause");
}
