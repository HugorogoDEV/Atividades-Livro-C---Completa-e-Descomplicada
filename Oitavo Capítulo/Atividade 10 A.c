#include <stdio.h>
#include <stdlib.h>
int e,f,i;
char g[10];
int funcao(int *c,int d){
int b,i;
for(i=0;i<d;i++){
    for(b=d;b>0;b--){
        if(c[i]==c[b]){
            e+=1;
        }
    }
}
if(e==d){
    return 1;
}
else
    return 0;
}
void main(){
printf("Insira uma palavra: ");
scanf("%s",g);
for(i=0;g[i]!='\0';i++){}
i-=1;
printf("\n%d\n",funcao(g,i));
system("pause");
}
