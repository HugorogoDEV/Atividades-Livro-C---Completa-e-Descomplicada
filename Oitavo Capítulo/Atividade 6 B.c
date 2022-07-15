#include <stdio.h>
#include <stdlib.h>
int d;
float e[20],c;
float funcao(float *a,int b){
if(a[b]!='\0'){
    return a[b]+funcao(a,b+1);
}
}
void main(){
printf("Insira o tamanho do array: ");
scanf("%f",&c);
for(d=0;c>d;d++){
    printf("Valor de [%d]: ",d);
    scanf("%f",&e[d]);
}
printf("A media dos valores: %f.\n",funcao(e,0)/c);
system("pause");
}
