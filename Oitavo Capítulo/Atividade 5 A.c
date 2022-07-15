#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int v[],i,n;
float d=0;
float desvio(int n,float *d){
for(i=0;i<n;i++){
printf("Insira um valor:");
scanf("%d",&v[i]);
*d+=v[i]-n;
fflush(stdin);
}
*d/=(n-1);
*d=sqrt(*d);
return *d;
}
void main(){
printf("numero de n:");
scanf("%d",&n);
printf("O desvio: %f\n",desvio(n,&d));
system("pause");
}
