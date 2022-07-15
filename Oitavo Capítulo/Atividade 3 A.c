#include <stdio.h>
#include <stdlib.h>
int a[],b=10,c;
int soma(int *a,int b){
for(c=0;c<b;c++){
    printf("Insira um numero: ");
    scanf("%d",&a[c]);
    if(c>0){
        a[c]+=a[c-1];
    }
}
return a[c-1];
}
void main(){
printf("\n%d\n",soma(&a,b));
system("pause");
}
