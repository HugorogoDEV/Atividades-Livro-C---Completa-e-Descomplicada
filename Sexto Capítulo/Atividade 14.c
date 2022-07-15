#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[10];
int vet[10],vet2[10],i=0;
int main(){
printf("Insira uma frase:\n");
setbuf(stdin,NULL);
gets(str);
printf("A frase em codigo cesariano e:\n");
for(vet[i]=str[i];i<strlen(str);i++){
if(vet[i]>119){
    vet[i]-=23;
}
if(vet[i]<=119){
    vet[i]+=3;
}
str[i]=vet[i];
}
fputs(str,stdout);
system("pause");
return 0;
}
