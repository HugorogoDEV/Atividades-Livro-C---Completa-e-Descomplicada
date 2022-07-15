#include <stdio.h>
#include <stdlib.h>
int a[100]={0,1},z,t,g;
int fibo(int n,int *b){
for(z=2;n>1,z<=n;z++){
    a[z]=a[z-1]+a[z-2];}
if(n<=1){
    return b[n];
}
else{
    return b[n-1]+b[n-2];
}
}
void main(){
for(g=0;g<=0;g++){
    printf("Insira um numero: ");
    scanf("%d",&t);
}
printf("O enesimo termo: %d.\n",fibo(t-1,a));
system("pause");
}
