#include <stdio.h>
#include <stdlib.h>
/* Fa�a um programa que leia dois n�meros e mostre o maior deles.
 Se, por acaso, os dois n�meros forem iguais, imprima a mensagem "N�mero iguais". */
int main()
{
    int x,y;
    printf("Insira dois numeros: \n");
    scanf("%d%d",&x,&y);
    if(x!=y){
        if(x>y)
            printf("%d\n",x);
        if(x<y)
            printf("%d\n",y);
    }
    else
        printf("Numeros iguais\n");
    system("pause");
    return 0;
}
