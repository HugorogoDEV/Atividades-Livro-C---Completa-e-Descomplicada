#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,A[100];
printf("O vetor e composto por:\n");
for(a=0,b=1;a<100;a++,b++){
    if(b%7==0){
        b+=1;
    }
    A[a]=b;
    printf("%d.\n",A[a]);
}
system("pause");
return 0;
}
