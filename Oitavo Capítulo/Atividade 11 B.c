#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a,c,d,z,y[10],u,l,e;
int funcao(int f,int *b,int g,int h){
if(g>=0){
    b[h]=f/pow(10,g);
    f-=b[h]*pow(10,g);
    return funcao(f,b,g-1,h+1);
}
for(z=pow(10,g);h>=0;h--,g++){
    b[h]*=pow(10,g);
}
}
void main(){
printf("Insira um numero: ");
scanf("%d",&a);
e=0;
for(c=pow(10,d);e!=0;d++){
    if(a/c<10){
        e=1;
    }
}
funcao(a,y,d,u);
for(;d>0;d--){
    l+=y[d];
}
printf("%d",l);
system("pause");
}
