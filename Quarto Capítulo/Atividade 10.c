#include <stdio.h>
#include <stdlib.h>
int main(){
int num1=0,num2=0,a,b;
for(a=0;a<10;a++){
inicio:
    printf("digite um numero:\n");
    scanf("%d",&num1);
    if(num1<0){goto inicio;}
    else{num2=num1+num2;}}
    b=num2/10;
    printf("%d",b);
    system("pause");
    return 0;
}
