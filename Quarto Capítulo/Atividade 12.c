#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c,sum=0;
printf("Insira um numero inteiro:\n");
scanf("%d",&a);
for(b=1;a>b;b++){
    c=a;
    c%=b;
    if(c==0)
        sum+=b;}
    printf("%d.\n",sum);
    system("pause");
    return 0;
}
