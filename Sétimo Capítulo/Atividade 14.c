#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum lista{pao,carne,cenoura}a;
int c,d;
char b[50];
int main(){
strcpy(b,"Insira um numero entre 0 e 2\n");
for(c=0;c==0;){
    puts(b);
    scanf("%d",&d);
    if(d>=0&&d<=2){
        c=1;
        switch(d){
        case 0:printf("pao,R$3,90\n");break;
        case 1:printf("carne,R$15,00\n");break;
        case 2:printf("pao,R$2,00\n");break;
        }
    }
}
system("pause");
return 0;
}
