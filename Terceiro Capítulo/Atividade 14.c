#include <stdio.h>
#include <stdlib.h>
int main(){
int x,y,z;
printf("Digite um numero.\n");
scanf("%d",&x);
y=(x%3);
switch(("%d",y)){
case 0:
    printf("E divisivel por 3.\n"); break;
default:
    printf("Nao e divisivel por 3.\n"); break;
}
z=(x%5);
switch(("%d",z)){
case 0:
    printf("E divisivel por 5.\n"); break;
default:
    printf("Nao e divisivel por 5.\n"); break;
}
system("pause");
return 0;
}
