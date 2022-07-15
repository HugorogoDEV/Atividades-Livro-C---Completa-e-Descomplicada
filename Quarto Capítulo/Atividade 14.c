#include <stdio.h>
#include <stdlib.h>
int main(){
int a,n,b=0,c=1,sum;
printf("Insira um numero maior ou igual a zero:\n");
scanf("%d",&n);
for(a=3;n>=a;a++){
    sum=b+c;
    b=c;
    c=sum;
}
printf("%d.\n",sum);
system("pause");
return 0;
}
