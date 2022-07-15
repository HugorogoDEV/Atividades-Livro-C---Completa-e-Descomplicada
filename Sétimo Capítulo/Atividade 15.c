#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union tipo{
short x;
unsigned char y;
}a;
int main(){
int b,v,e;
char c[50];
strcpy(c,"Insira um valor positivo:\n");
for(b=0;b==0;){
    puts(c);
    scanf("%d",&a.x);
    if(a.x>=0){
        b=1;
        printf("%d\n",a.x);
        printf("%d\n",a.y);
    }
}
system("pause");
return 0;
}
