#include <stdio.h>
#include <stdlib.h>
/* Fa�a um programa que converta uma letra mai�scula em letra minuscula. Use a tablea ASCII para isso.*/
int main()
{
    char x,y;
    printf("Insira aqui uma letra e retornaremos ela maiuscula: \n");
    scanf("%c",&x);
    y = x + 32;
    printf("A letra min�sucla e: %c\n",y);
    system("pause");
    return 0;
}
