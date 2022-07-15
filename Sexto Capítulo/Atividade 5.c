#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char str[30],str2[30];
int a,b;
printf("Insira uma frase:\n");
fgets(str, 30, stdin);
for(a=strlen(str);a>=0;a--){
    b=strlen(str)-a;
    str2[b]=str[a];
}
printf("A frase ao contrario:\n");
for(a=0;str[a]!=str2[a];a++){
    str[a]=str2[a];
    printf("%c",str[a]);
}
printf("\n");
system("pause");
return 0;
}
