#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    printf("Digite um numero e mostraremos ele multiplicado e dividido por 2: \n");
    scanf("%d",&x);
    y = x << 1;
    printf("multiplicado por 2: %d\n",y);
    y = x >> 1;
    printf("divido por 2: %d\n",y);
    system("pause");
    return 0;
}
