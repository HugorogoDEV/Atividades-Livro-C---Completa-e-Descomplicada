#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b;
int A[10];
for(a=0;a<10;a++){
    printf("Insira um valor no slot %d:\n",a);
    scanf("%d",&A[a]);
}
printf("Aos valores inseridos, estes sao pares:\n");
for(a=0;a<10;a++){
    b=A[a]%2;
    if(b==0){
        printf("%d.\n",A[a]);}
}
system("pause");
return 0;
}
