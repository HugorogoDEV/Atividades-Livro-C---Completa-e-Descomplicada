#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[80],b[80],*c,*d;
void func(char *e,char *f){
int g,h,i,j,k;
for(g=0;*(f+g)!='\0';g++){
    for(h=0;*(e+h)!='\0';h++){
        if(*(e+h)==*(f+g)){
            i=1;
        }
    }
j+=i;
}
k=strlen(f);
if(k==j){
printf("\nEsta dentro.\n");
}
else{
    printf("\nNao esta dentro.\n");
}
}
void main(){
printf("Insira uma frase: ");
gets(a);
printf("Insira uma frase: ");
gets(b);
c=a;
d=b;
func(c,d);
system("pause");
}
