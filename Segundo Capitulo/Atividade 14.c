#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que converta uma letra maiúscula em letra minuscula. Use a tablea ASCII para isso.*/
int main()
{
    char x,y;
    printf("Insira aqui uma letra e retornaremos ela maiuscula: \n");
    scanf("%c",&x);
    y = x + 32;
    printf("A letra minúsucla e: %c\n",y);
    system("pause");
    return 0;
}
