#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cadastro{
char nome[40];
int idade;
char rua[60];
int numero;
};
int main(){
struct cadastro c;
printf("\n--- Cadastro ---");
printf("\n--- Nome: ");
gets(c.nome);
printf("--- Idade: ");
scanf("%d",&c.idade);
fflush(stdin);
printf("--- Rua: ");
gets(c.rua);
printf("--- Numero: ");
scanf("%d",&c.numero);
printf("\n--- Cadastro Realizado ---");
printf("\n--- Nome: %s",c.nome);
printf("\n--- Idade: %d",c.idade);
printf("\n--- Rua: %s",c.rua);
printf("\n--- Numero: %d \n\n",c.idade);
system("pause");
return 0;
}
