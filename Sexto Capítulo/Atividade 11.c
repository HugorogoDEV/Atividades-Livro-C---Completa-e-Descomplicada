#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int i, vet[10];
char str[10];
printf("Insira uma linha: ");
gets(str);
for(i=0;i<strlen(str);i++){
vet[i]=str[i];
if(vet[i]>=65){
    if(vet[i]<=90){
        vet[i]+=32;
    }
}
printf("%c",vet[i]);
}
printf("\n");
system("pause");
return 0;
}
