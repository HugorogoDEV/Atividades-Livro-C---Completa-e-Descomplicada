#include <stdio.h>
#include <stdlib.h>
int c,d,e,temp;
void funcao(int *a,int b){
do{
    e=0;
    for(c=1;c<b;c++){
            d=c;
        if((a[d]<a[d-1])&&(c>0)){
            temp=a[d];
            a[d]=a[d-1];
            a[d-1]=temp;
            e=1;
        }
    }
}while(e!=0);
}
void main(){
int w[5];
for(c=0;c<5;c++){
    printf("Insira o numero: ");
    scanf("%c",&w[c]);
    fflush(stdin);
}
funcao(w,c);
for(d=0;d<c;d++){
    printf("%c,",w[d]);
}
printf("\n");
system("pause");
}
