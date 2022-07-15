#include <stdio.h>
#include <stdlib.h>
int main(){
char str[30];
int a;
printf("Insira uma frase: ");
gets(str);
printf("A frase ao contrario:\n");
for(a=strlen(str);a>=0;a--){
    printf("%c",str[a]);
}
printf("\n");
system("pause");
return 0;
}
