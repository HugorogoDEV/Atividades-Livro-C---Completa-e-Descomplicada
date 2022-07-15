#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n,x,f,g;
float b,d[];
float fatorial(int n){
if(n>0){
    return n*fatorial(n-1);
}
else return 1;
}
float taylor(int x){
for(g=0;g<=5;g++){
    b=x*(M_PI/180);
    d[g]=(pow(-1,g)*pow(b,2*g+1))/fatorial(2*g+1);
}
}
float somatorio(int f){
if(f>0){
    return d[f]+somatorio(f-1);
}
else return 0;
}
void main(){
printf("Insira um angulo:");
scanf("%d",&n);
printf("%f.\n",taylor(n));
printf("\n%f\n",sin(x));
system("pause");
}
