#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c=1,n;
printf("Insire um valor:\n");
scanf("%d",&n);
printf("Essas são as linhas do triangulo de Floyd:\n");
for(a=1;a<=n;a++){
    for(b=1;b<=a;b++,c++){
        printf("%d ",c);
    }
    printf("\n");
}
system("pause");
return 0;
}
