#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c;
inicio:
    printf("Insira um numero positivo:\n");
    scanf("%d",&a);
    if(a<0){goto inicio;}
    printf("Os divisores %d sao:\n",a);
    for(b=1,c=1;a>=b;b++,c++){
        if(a%=b!=0)
        continue;
        printf("%d",c);}
    system("pause");
    return 0;
    }
