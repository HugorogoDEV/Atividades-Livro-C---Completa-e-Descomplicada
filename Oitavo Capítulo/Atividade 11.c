#include <stdio.h>
#include <stdlib.h>
int a,b;
int potencia(int a,int b){
if(b>0){
    return a*potencia(a,b-1);
}
else return 1;
}
void main(){
printf("Insira dois numeros:");
scanf("%d%d",&a,&b);
printf("Resultado:%d\n",potencia(a,b));
system("pause");
}
