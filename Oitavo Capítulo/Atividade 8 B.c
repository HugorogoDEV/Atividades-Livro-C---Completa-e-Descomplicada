#include <stdio.h>
#include <stdlib.h>
int b,f,c;
int funcao(int a,int d){
if(d!=0){
    return a+funcao(a,d-1);
}
return 0;
}
void main(){
printf("Insira uma multiplicacao:\n");
printf("Insira o primeiro: ");
scanf("%d",&b);
printf("Insira o segundo: ");
scanf("%d",&f);
printf("Somatorio: %d\n",funcao(b,f));
system("pause");
}
