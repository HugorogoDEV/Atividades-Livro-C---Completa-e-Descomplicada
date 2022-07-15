#include <stdio.h>
#include <stdlib.h>
char f[1],g='*';
int c,d,e,h;
void funcao(int c){
for(d=1;d<=c;d++){
    for(e=d;e>0;e--){
        printf("%c",g);
    }
printf("\n");
}
if(1!=0){
    for(h=c-1;h>0;h--){
        for(e=h;e>0;e--){
            printf("%c",g);
        }
    printf("\n");
    }
}
}
void main(){
strcpy(f,"*");
printf("Insira um numero:");
scanf("%d",&c);
funcao(c);
system("pause");
}
