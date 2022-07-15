#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia dois números e mostre o maior deles.
 Se, por acaso, os dois números forem iguais, imprima a mensagem "Número iguais". */
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
