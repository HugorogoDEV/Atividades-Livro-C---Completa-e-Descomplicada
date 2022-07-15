#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct dados{
char nome[50];
int dia;
int mes;
int ano;
}d[6];
int main(){
int a,menor,maior;
for(a=0;a<6;a++){
    printf("Insira um nome:");
    gets(d[a].nome);
    printf("Insira dia:");
    scanf("%d",&d[a].dia);
    printf("Insira o mes:");
    scanf("%d",&d[a].mes);
    printf("Insira o ano:");
    scanf("%d",&d[a].ano);
    if(a==5){
        maior=d[a].ano;
        menor=d[a].ano;
        for(;a!=0;a--){
            if(maior<d[a-1].ano){
                maior=d[a-1].ano;
            }
            if(menor>d[a-1].ano){
                menor=d[a-1].ano;
            }
        }
        a=5;
    }

fflush(stdin);
}
for(a=0;a<6;a++){
    if(maior==d[a].ano){
        printf("A mais nova e:\n");
        puts(d[a].nome);
    }
    if(menor==d[a].ano){
        printf("A mais velha:\n");
        puts(d[a].nome);
    }
}
system("pause");
return 0;
}
