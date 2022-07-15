#include <stdio.h>
#include <stdlib.h>
int main(){
char str[9];
int i;
printf("Qual e a capital do Brasil:");
scanf("%s",str);
printf("Suas quatro primeiras letras:\n");
for(i=0;i<4;i++){
    printf("%c",str[i]);
}
printf("\n");
system("pause");
return 0;
}
