#include <stdio.h>
#include <stdlib.h>
float c;
int a,b[]={1,2,3,4,5,6,7,8,9,10};
float funcao(int *c){
    for(*c=b[0],a=1;a<10;a++){
        *c+=b[a];
    }
    return *c;
}
void main(){
printf("A media e: %f.\n",funcao(&c));
system("pause");
}
