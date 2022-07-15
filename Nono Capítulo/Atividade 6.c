#include <stdio.h>
#include <stdlib.h>
int a[5],*b=a,c;
void func(int d,int *e);
void main(){
for(c=0;c<5;c++){
    printf("Insira um valor: ");
    scanf("%d",&*(b+c));
}
func(c-1,b);
system("pause");
}
void func(int d,int *e){
if(d>=0){
    if(*(e+d)%2==0){
        printf("em hexadecimal: %p. Em decimal: %d\n",e+d,e+d);
    }
func(d-1,e);
}
}
