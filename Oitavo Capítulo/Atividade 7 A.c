#include <stdio.h>
#include <stdlib.h>
int a,b,c[][10],d=1,e=0;
int soma(int c[][10]){
for(b=10;b>=1;b--){
    for(a=10;a>=1;a--){
        e+=c[a][b];
    }
}
return e;
}
void main(){
for(a=1;a<=10;a++){
    for(b=1;b<=10;b++,d++){
        c[a][b]=d;
    }
}
printf("%d\n",soma(c));
system("pause");
}
