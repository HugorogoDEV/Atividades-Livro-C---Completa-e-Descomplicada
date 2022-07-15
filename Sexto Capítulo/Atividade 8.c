#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char srt[10],srt2[10];
int i,j,vet[10],a=0;
printf("Insira uma linha: ");
gets(srt);
printf("Insira outra: ");
gets(srt2);
for(j=0;j<strlen(srt2);j++){
    for(i=0;i<strlen(srt);i++){
        if(srt[i]==srt2[j]){
            vet[j]=1;
        }
    }
a+=vet[j];
}

if(a==strlen(srt2)){
    printf("A segunda string esta contida na primeira.\n");
}
else{
    printf("A segunda string nao esta contida nas primeira.\n");
}
}
