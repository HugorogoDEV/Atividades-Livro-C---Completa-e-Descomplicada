#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia dois numero e mmostre qual dele é maior.
int main()
{
    int x,y;
    printf("Insira dois numeros: \n");
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("%d e maior que %d\n",x,y);
    }

    else {
        printf("%d e menor que %d\n",x,y);
    }
    system("pause");
    return 0;
}
