#include <stdio.h>
#include <stdlib.h>
int main()
{
    int w,x,y,z;
    printf("Insira tres numeros inteiros: \n");
    scanf("%d%d%d", &x,&y,&z);
    w = x + y + z;
    printf("A soma deles e: \n");
    printf("w = %d\n", w);
    system("pause");
    return 0;
}
