#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b=0;
int valor[5];
for(a=0;a<5;a++){
    printf("Insira um valor para o slot %d.\n",a);
    scanf("%d",&valor[a]);
}
printf("Os valores inseridos foram:\n");
for(a=0;a<5;a++){
    printf("%d.\n",valor[a]);
}
for(a=0;a<5;a++){
    b+=valor[a];
}
b/=5;
printf("A media e:\n%d\n",b);
system("pause");
return 0;
}
