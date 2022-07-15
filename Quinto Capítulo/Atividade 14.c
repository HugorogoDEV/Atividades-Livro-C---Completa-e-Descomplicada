#include <stdio.h>
#include <stdlib.h>
int main(){
int V[10],a,sum=0;
float d,m,sum2=0,b;
for(a=0;a<10;a++){
    printf("Insira o valor para o slot %d:\n",a);
    scanf("%d",&V[a]);
    sum+=V[a];
}
m=sum/(a+1);
for(a=0;a<10;a++){
    sum2+=V[a]-m;
}
b=sum2/a;
d=sqrt(b);
printf("O desvio medio do vetor e:\n%f\n",d);
for(a=0;a<10;a++){
    printf("para o slot %d o valor inserido e:\n%d\n",a,V[a]);
}
system("pause");
return 0;
}
