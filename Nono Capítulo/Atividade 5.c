#include <stdio.h>
#include <stdlib.h>
int a[5],*b,c=0;
void func(int w){
printf("%d.\n",*(b+w)*2);
if(w<4){
    func(w+1);
}
}
void main(){
inicio:
printf("Insira uma informacao: ");
b=a;
scanf("%d",&*(b+c));
if(c<4){
    c+=1;
    goto inicio;
}
c=0;
func(c);
}
