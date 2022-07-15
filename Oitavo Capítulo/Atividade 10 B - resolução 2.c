#include <stdio.h>
#include <stdlib.h>
int z,t,g;
int fibo(int n){
if(n<=1){
    return n;
}
else{
    return fibo(n-1)+fibo(n-2);
}
}
void main(){
for(g=0;g<=0;g++){
    printf("Insira um numero: ");
    scanf("%d",&t);
}
printf("O enesimo termo: %d.\n",fibo(t-1));
system("pause");
}
