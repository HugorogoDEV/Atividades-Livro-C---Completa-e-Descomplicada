#include <stdio.h>
#include <stdlib.h>
int main(){
int a=0,n;
printf("Digite um numero.\n");
scanf("%d",&n);
printf("Esses sao os numeros entre ele e 0.\n");
while(a<n-1){
    a=a+1;
    printf("%d\n",a);
}
system("pause");
return 0;
}
