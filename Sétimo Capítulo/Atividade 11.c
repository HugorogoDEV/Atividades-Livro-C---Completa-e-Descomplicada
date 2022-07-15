#include <stdio.h>
#include <stdlib.h>
struct data{int data[3];}w[2];
int main(){
int a,b,c,d,e,f;
for(a=0;a<2;a++){
for(b=0;b<3;b++){
switch(b){
case 0: printf("Dia:");
break;
case 1: printf("Mes:");
break;
case 2:
printf("Ano:");
break;}
scanf("%d",&w[a].data[b]);
if(a==1){
switch(b){
case 0:
c=w[a].data[b]-w[a-1].data[b];
break;
case 1:
d=(w[a].data[b]-w[a-1].data[b])*30;
break;
case 2:
e=365*(w[a].data[b]-w[a-1].data[b]);
break;}}}}
fflush(stdin);
f=c+d+e;
printf("O numero de deias entre eles e: %d",f);
system("pause");
return 0;
}
