#include <stdio.h>
#include <stdlib.h>
int maior(int x,int y){
if(x>y){return("O maior e x");}
if(y>x){return("O maior e y");}
else{return("nenhum e maior");}}
int main(){
int a,b,c;
printf("Entre com um numero x:");
scanf("%d",&a);
printf("Entre com um numero y:");
scanf("%d",&b);
c=maior(a,b);
printf("%s\n",c);
system("pause");
return 0;
}
