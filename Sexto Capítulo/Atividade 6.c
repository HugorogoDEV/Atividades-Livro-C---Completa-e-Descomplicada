#include <stdio.h>
#include <stdlib.h>
int main(){
char str[30],str2[6]={'a','e','i','o','u'};
int a,b,c=0;
printf("Insira uma frase:");
fgets(str,30,stdin);
for(a=0;str[a]!='\0';a++){
    for(b=0;str2[b]!='\0';b++){
        if(str[a]==str2[b]){
            c+=1;
            str[a]='o';
        }
    }
}
printf("O numero de vogais e: %d.\n",c);
fputs(str,stdout);
system("pause");
return 0;
}
