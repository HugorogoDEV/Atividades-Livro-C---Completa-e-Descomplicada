#include <stdio.h>
#include <stdlib.h>
/* faça um programa que leia um valor em reais e a cotação do dolar.
Em seguida, imprima a valor correspondente em dólares */
int main()
{
    float x,y,z;
    printf("Insira aqui um valor em reais e a cotação em dolares: \n");
    scanf("%f%f",&x,&y);
    z = x / y;
    printf("o valor correspondente em dolar e: \n%f\n",z);
    system("pause");
    return 0;
}
