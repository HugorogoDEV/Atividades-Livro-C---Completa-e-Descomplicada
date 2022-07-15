#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum dias {domingo, segunda, terca, quarta, quinta, sexta, sabado}hoje;
int main(){
int a,x;
char b[50];
strcpy(b,"Insira um numero de 0 a 6:");
puts(b);
for(a=0;a==0;puts(b)){
    scanf("%d",&x);
    if(x<=6&&x>=0){
        a=1;
        switch(x){
            case 0:printf("domingo\n");break;
            case 1:printf("segunda\n");break;
            case 2:printf("terca\n");break;
            case 3:printf("quarta\n");break;
            case 4:printf("quinta\n");break;
            case 5:printf("sexta\n");break;
            case 6:printf("sabado\n");break;
        }
    }
}
system("pause");
return 0;
}
