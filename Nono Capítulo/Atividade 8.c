#include <stdio.h>
#include <stdlib.h>
int c[100],d,*e,f=0,g;
void func(int *a,int b){
*(a+f)=b;
f+=1;
if(f<=100){
func(a,b);
}
}
void main(){
printf("Insira um valor: ");
scanf("%d",&d);
e=c;
func(e,d);
for(g=0;*(e+g)!='\0';g++){
printf("%d-",*(e+g));
}
system("pause");
}
