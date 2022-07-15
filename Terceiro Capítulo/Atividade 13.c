#include <stdio.h>
#include <stdlib.h>
int main(){
int w,x,y,z;
printf("Qual das opçoes voce deseja:\n 1 para soma.\n 2 para subtraçao.\n 3 para divisao.\n 4 para multiplicaçao.\n");
scanf("%d",&z);
printf("Agora insira dois numeros e mostraremos o resultado.\n");
scanf("%d%d",&x,&y);
switch(z){
case 1:
    w=x+y;
    printf("%d\n",w); break;
case 2:
    w=x-y;
    printf("%d\n",w); break;
case 3:
    w=x/y;
    printf("%d\n",w); break;
case 4:
    w=x*y;
    printf("%d\n",w); break;
default:
    printf("Nao valido.\n");
}
system("pause");
return 0;
}
