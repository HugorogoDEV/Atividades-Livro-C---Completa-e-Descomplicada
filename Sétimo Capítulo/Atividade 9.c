#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct atleta{
char nome[50];
char esporte[50];
int idade;
float altura;
}a[5];
int main(){
int b,c,velho;
float alto;
for(b=0;b<5;b++){
    printf("Nome:");
    gets(a[b].nome);
    printf("Esporte:");
    gets(a[b].esporte);
    printf("Insira a Idade: ");
    scanf("%d",&a[b].idade);
    printf("Insira a altura: ");
    scanf("%f",&a[b].altura);
    fflush(stdin);
}
for(b=0,velho=a[b].altura;b<5;b++){
    if(alto<a[b].altura){
        alto=a[b+1].altura;
    }
    if(velho<a[b+1].idade){
        velho=a[b+1].idade;
    }
}
for(b=0;b<6;b++){
if(alto==a[b].altura){
printf("O mais alto e: %s",a[b].nome);}
if(velho==a[b].idade){
printf("O mais velho: %s",a[b].nome);}}
system("pause");
return 0;
}
