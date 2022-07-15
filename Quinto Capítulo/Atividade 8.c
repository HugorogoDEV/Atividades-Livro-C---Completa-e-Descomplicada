#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b=0;
float A[10];
float c=0,d;
for(a=0;a<10;a++){
    printf("Insira o valor do slot %d.\n",a);
    scanf("%f",&A[a]);
}
printf("Quantidade de numeros negativos:\n");
for(a=0;a<10;a++){
    if(A[a]<0){
        b+=1;
    }
b=b;
}
printf("%d.\n",b);
printf("Soma dos numeros positivos:\n");
for(a=0;a<10;a++){
    if(A[a]>0){
        c+=A[a];
    }
}
printf("%f.\n",c);
system("pause");
return 0;
}
