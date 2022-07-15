#include <stdio.h>
#include <stdlib.h>
int main(){
char a;
int b,z,A,B,C,D,E,F,G,H,I;
printf("Digite 10 numeros:\n");
for(a='A';a!='K';a++){
    scanf("%d",b);
    printf("%c=%d",a,b);
}
z=A+B+C+D+E+F+G+H+I;
printf("A soma e: %d",z);
system("pause");
return 0;
}
