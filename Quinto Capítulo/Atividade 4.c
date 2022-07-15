#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
int A[6]={1,0,5,-2,-5,7};
a=A[0]+A[1]+A[5];
printf("%d.\n",a);
A[3]=100;
for(a=0;a<6;a++){
    printf("%d.\n",A[a]);
}
system("pause");
return 0;
}
