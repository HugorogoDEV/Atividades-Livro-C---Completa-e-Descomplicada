#include <stdio.h>
#include <stdlib.h>
/*Elabore um programa que leia dois n�meros inteiros e exiba o deslocamento, �
esquerda e � direita, do primeiro n�mero pelo segundo.*/
int main()
{
    int x,y,z;
    printf("digite dois n�mero: \n");
    scanf("%d%d",&x,&y);
    x /= y;
    x <<= y;
    printf("deslocamento a esquerda: %d\n",x);
    x >>= y;
    printf("deslocamernto a direita: %d\n",x);
    system("pause");
    return 0;
}
