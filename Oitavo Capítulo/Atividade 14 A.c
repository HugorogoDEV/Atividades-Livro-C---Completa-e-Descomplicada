#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void funcao(int *co,float *d){
float delta=pow(co[1],2)-(4*co[0]*co[2]),x1=(sqrt(delta)-co[1])/(2*co[0]),x2=-co[1]-sqrt(delta)/(2*co[0]);
int a;
if(co[0]==0){
printf("\nNao e equacao de segundo grau.\n-1");
}
else{
    if(delta<0){
        printf("Nao existe:\n");
        printf("Numero de raizes: 0\n");
    }
    if(delta==0){
        d[0]=x1;
        printf("Existe uma raiz real.\n");
        for(a=0;a<1;a++){printf("Numero de raizes: %f\n",d[a]);}
    }
    if(delta>0){
        d[0]=x1;
        d[1]=x2;
        printf("Existem duas raizes.\n");
        for(a=0;a<2;a++){printf("Numero das raizes: %f\n",d[a]);}
    }
}
}
void main(){
int j,z[3];
float y[2];
for(j=0;j<3;j++){
    printf("coeficiente %d: ",j+1);
    scanf("%d",&z[j]);
    fflush(stdin);
}
funcao(z,y);
system("pause");
}
