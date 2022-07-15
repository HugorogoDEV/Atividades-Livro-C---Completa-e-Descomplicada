#include <stdio.h>
#include <stdlib.h>
int b[20],d,e;
void main(){
printf("Insira o tamanho do array: ");
scanf("%d",&d);
for(e=0;d-1>=e;e++){
    printf("Insira um numero: ");
    scanf("%d",&*(b+e));
}
e--;
void func(int *a){
printf("%d-",*(a+e));
if(e>0){
e-=1;
func(a);
}
}
func(b);
system("pause");
}
