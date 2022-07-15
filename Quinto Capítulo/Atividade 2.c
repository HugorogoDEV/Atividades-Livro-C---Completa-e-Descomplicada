#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
int valor[6];
for(a=0;a<6;a++){
    printf("Para o slot %d, insira valor:\n",a);
    scanf("%d",&valor[a]);
}
printf("Agora os valores na ordem inversa.\n");
for(a=5;a>-1;a--){
    printf("%d.\n",valor[a]);
}
system("pause");
return 0;
}
