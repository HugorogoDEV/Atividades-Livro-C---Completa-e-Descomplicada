#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[10],b[2],c,d,e,f;
void tipos(int *w,int f){
for(c=0;c<f;c++){
    if(a[c]%2==0){
        b[0]+=a[c];
    }
    else
        b[1]+=a[c];
}
}
void main(){
for(d=0;a[d]>0,d<10;d++){
    printf("Insira: ");
    scanf("%d",&a[d]);
}
for(f=0;a[f]!='\0';f++){}
tipos(a,f);
printf("Quantidade de pares: %d\n",b[0]);
printf("de impar: %d",b[1]);
system("pause");
}
