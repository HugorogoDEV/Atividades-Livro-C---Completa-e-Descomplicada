#include <stdio.h>
#include <stdlib.h>
int main(){
char str[10];
int a;
printf("Insira uma palavra:");
scanf("%s",str);
for(a=0;str[a]!='\0';a++){}
printf("O numero de letras da linha:\n%d\n",a);
system("pause");
return 0;
}
