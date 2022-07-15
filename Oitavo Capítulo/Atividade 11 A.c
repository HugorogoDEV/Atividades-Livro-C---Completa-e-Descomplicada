#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int c;
char g[50];
char funcao(char *a,int d){
for(c=0;c<d;c++){
    if((a[c]>=97)||(a[c]<=122)){
        a[c]-=32;
    }
}
return *a;
}
void main(){
printf("Insira uma frase: ");
gets(g);
funcao(g,strlen(g));
puts(g);
system("pause");
}
