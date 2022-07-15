#include <stdio.h>
#include <stdlib.h>
int a,b,c;
void exclamacao(int a){
for(b=1;b<=a;b++){
    for(c=b;c>0;c--){
        printf("!");
    }
    printf("\n");
}
}
void main(){
printf("Insira um numero:");
scanf("%d",&a);
exclamacao(a);
system("pause");
}
