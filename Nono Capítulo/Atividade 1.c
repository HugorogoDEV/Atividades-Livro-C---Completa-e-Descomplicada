#include <stdio.h>
#include <stdlib.h>
void main(){
int a=10,b=11,*c,*d;
c=&a;
d=&b;
if(c>d){
    printf("O maior endereco e de:%d.\n",c);
}
else
    printf("O maior endereco e de:%d.\n",d);
system("pause");
}
