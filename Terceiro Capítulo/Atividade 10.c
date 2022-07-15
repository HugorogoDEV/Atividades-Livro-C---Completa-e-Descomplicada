#include <stdio.h>
#include <stdlib.h>
int main()
{   int a,b,c,d,w,x,y,z;
    printf("digite 3 valores inteiros:\n");
    scanf("%d%d%d",&x,&y,&z);
    a=x*y*z;
    b=(x+(2*y)+(3*z))/6;
    c=(x*y*z)/(y*z+x*z+x*y);
    d=(x+y+z)/3;
    printf("Agora insira um numero de 1 a 4: \n");
    scanf("%d",&w);
    switch(w){
case 1:
    printf("%d\n",a);break;
case 2:
    printf("%d\n",b);break;
case 3:
    printf("%d\n",c);break;
case 4:
    printf("%d\n",d);break;
default:
    printf("Não vale.\n");
}
system("pause");
return 0;
}
