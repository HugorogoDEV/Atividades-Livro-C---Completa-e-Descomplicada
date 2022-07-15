#include <stdio.h>
#include <stdlib.h>
int a;
int funcao(int n){
if(n!=0){
    return n*funcao(n-1);
}
return 1;
}
void main(){
printf("Insira o fatorial que deseja saber:\n");
scanf("%d",&a);
printf("%d!=%d.\n",a,funcao(a));
system("pause");
}
