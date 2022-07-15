#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int a,vet[2];
char str[10];
printf("Insira uma linha: ");
gets(str);
printf("Insira dois valores:\n");
for(a=0;a<2;a++){
    scanf("%d",&vet[a]);
    if(vet[a]<0){
        a-=1;
    }
}
for(;vet[0]<vet[1];vet[0]++){
    printf("%c",str[vet[0]]);
}
printf("\n");
system("pause");
return 0;
}
