#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b;
int valor[6];
for(a=0;a<6;a++){
    printf("Insira o valor do slot %d.\n",a);
    scanf("%d",&valor[a]);
}
printf("Os valores inseridos forma.\n");
for(a=0;a<6;a++){
    printf("%d.\n",valor[a]);
}
system("pause");
return 0;
}
