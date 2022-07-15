#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char str[8];
int i,j,a=0;
printf("Insira uma linha:");
gets(str);
for(i=0;i<strlen(str);i++){
    j=strlen(str)-1-i;
    if(str[i]==str[j]){
        a+=1;
    }
}
if(a==strlen(str)){
    printf("A linha e um palindromo.\n");
}
else{
    printf("Nao e palindromo.\n");
}
system("pause");
return 0;
}
