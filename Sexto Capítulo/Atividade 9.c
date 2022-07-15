#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char srt[10],srt2[10];
int a,i,j,vet[10];
printf("Insira uma linha:");
gets(srt);
printf("Insira outra linha:");
gets(srt2);
for(j=0,vet[j]=0;strlen(srt2);j++){
    for(i=0;i<strlen(srt);i++){
        if(srt[i]==srt2[j]){
            vet[j]+=1;
        }
    }
}
for(j=0,a=vet[j];j+1<strlen(srt2),vet[j]!=0;j++){
    if(vet[j]>=vet[j+1]){
        a=vet[j+1];
    }}
if(a==0){
    printf("A segunda string nao estara na primeira.\n");
}
else{
    printf("A segunda string esta %d na primeira.\n",a);
}
system("pause");
return 0;
}

