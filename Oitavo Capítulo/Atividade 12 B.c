#include <stdio.h>
#include <stdlib.h>
int z,y[10],w=0;
void funcao(int n,int *m,int a){
if(n>2){
m[a]=n%2;
n/=2;
return funcao(n,m,a+1);
}
else{
    m[a]=n;
    m[a]%=2;
    m[a+1]=n/2;
}

for(a+=1;a>=0;a--){
    printf("%d",m[a]);
}
}
void main(){
printf("Insira um numero: ");
scanf("%d",&z);
printf("Ele em binario: ");
funcao(z,y,w);
system("pause");
}
