#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int i,j,vet[20],vet2[20];
char str[20],str2[20];
printf("Insira duas linhas:\n");
gets(str);
gets(str2);
strcat(str,str2);
for(i=0,vet[i]=str[i];i<strlen(str);i++){
    for(j=i+1;j<strlen(str);j++){
        if(vet[i]>vet[j]){
            vet2[i]=vet[j];
            vet[i]=vet[j];
            vet[j]=vet2[i];
        }
    }
str[i]=vet[i];
printf("%c",str[i]);
}
system("pause");
return 0;
}
