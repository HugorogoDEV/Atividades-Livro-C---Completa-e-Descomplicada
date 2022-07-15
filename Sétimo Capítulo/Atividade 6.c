#include <stdio.h>
#include <stdlib.h>
struct aluno{
unsigned int matricula;
char nome[50];
int total;
unsigned int notas[5];
}a[5];
int i,k,g;
int main(){
for(i=0;i<5;i++){
    printf("Matricula:");
    scanf("%d",&a[i].matricula);
    printf("Nome:");
    scanf("%s",&a[i].nome);
    for(k=0;k<3;k++){
        printf("Nota na prova:");
        scanf("%d",&a[i].notas[k]);
        a[i].total+=a[i].notas[k];
    }
a[i].total=a[i].total/(k+1);
}
for(k=0;k<4;k++){
    if(a[k].total<a[k+1].total){
        g=a[k+1].total;
    }
    else{
        g=a[k].total;
    }
}
for(k=0;k<5;k++){
    if(a[k].total==g){
        printf("O nome:\n");
        puts(a[k].nome);
        printf("\nNotas:\n");
        for(g=0;g<3;g++){
            printf("%d\n",a[k].notas[g]);
        }
    }
}
fflush(stdin);
system("pause");
return 0;
}
