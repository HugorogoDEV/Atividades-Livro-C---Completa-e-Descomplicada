#include <stdio.h>
#include <stdlib.h>
int main(){
int n, a=0;
printf("Digite um numero.\n");
scanf("%d",&n);
printf("Os numeros entre 0 e %d sao:\n",n);
while(n-1>=a+1){
    n=n-1;
    printf("%d\n",n);
}
system("pause");
return 0;
}
