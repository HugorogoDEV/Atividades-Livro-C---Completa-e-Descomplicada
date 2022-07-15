#include <stdio.h>
#include <stdlib.h>
int a,b,c,d,e,f;
int primo(int a){
for(b=1;b<=a;b++){
    d=0;
    for(c=1;c<=b;c++){
        e=b%c;
        if(e==0){
            d+=1;
        }
    }
    if(d==2){
        f=b;
    }
}
return f;
}
void main(){
printf("Insira um numero:");
scanf("%d",&a);
printf("O maior primo entre ele e zero:%d\n",primo(a));
system("pause");
}
