#include <stdio.h>
#include <stdlib.h>
struct aluno{
int matricula,prova[3];
char nome[10];
};
void main(){
printf("Tamanho struct aluno: %d.\n",sizeof(struct aluno));
system("pause");
}
