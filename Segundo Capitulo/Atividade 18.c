#include <stdio.h>
#include <stdlib.h>
/*Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo.*/
int main()
{
    int x,y,z;
    printf("digite dois número: \n");
    scanf("%d%d",&x,&y);
    x /= y;
    x <<= y;
    printf("deslocamento a esquerda: %d\n",x);
    x >>= y;
    printf("deslocamernto a direita: %d\n",x);
    system("pause");
    return 0;
}
