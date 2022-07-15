#include <stdio.h>
#include <stdlib.h>
void main(){
float mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int *p=&mat,a;
for(a=0;a<9;a++){
    printf("E endereco: %d.\n",p+a);
}
system("pause");
}
