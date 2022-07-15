#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    printf("digite dois numeros: \n");
    scanf("%d%d",&x,&y);
    x&=y;
    printf("E bit a bit deles: %d\n",x);
    x|=y;
    printf("Ou bit a bit deles: %d\n",x);
    x^=y;
    printf("Ou exclusivo deles: %d\n",x);
    system("pause");
    return 0;
}
