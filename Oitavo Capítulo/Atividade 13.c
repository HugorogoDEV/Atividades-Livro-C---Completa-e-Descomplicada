#include <stdio.h>
#include <stdlib.h>
int a;
int somatorio(int a){
if(a>0){
    return a+somatorio(a-1);
}
else return 0;
}
void main(){
printf("Insira um valor:");
scanf("%d",&a);
printf("Resultado: %d\n",somatorio(a));
system("pause");
}
