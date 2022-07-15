#include <stdio.h>
#include <stdlib.h>
void main(){
float a[10]={1.02,2.78,3.2,4.6,5.5,6.6,7.4,8.3,9.2,10.1},*b=a;
int c;
for(c=0;c<10;c++){
    printf("\nO endereco: %d.\n",b+c);
}
system("pause");
}
