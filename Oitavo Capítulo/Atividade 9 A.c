#include <stdio.h>
#include <stdlib.h>
int d[3],f,b,c;
struct aluno{
int matricula,notas[3];
char nome[10];
}a[3];
int funcao(struct aluno a[3],int *f){
for(b=0;b<3;b++){
    for(c=0;c<3;c++){
        d[b]+=a[b].notas[c];
    }
    if(b>0){
        *f=d[b];
        if(d[b-1]>d[b]){
            *f=d[b-1];
        }
    }
}
return *f;
}
void main(){
for(b=0;b<3;b++){
    printf("O nome: ");
    scanf("%s",a[b].nome);
    for(c=0;c<3;c++){
        printf("Nota %d:",c+1);
        scanf("%d",&a[b].notas[c]);
    }
}
funcao(a,&f);
for(b=0;b<3;b++){
    if(f==d[b]){
        printf("Indice do aluno: %d\n",b);
    }
}
system("pause");
}
