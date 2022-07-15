#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Faça um programa que leia os valores a e b e calcule o vlaor da hipotenusa através da fórmula dada. Imprima o resultado.*/
int main ()
{
    float w,x,y,z,a,b;
    printf("h^2 = a^2 + b^2, insira aqui,nessa ordem, a e b respectivamente: \n");
    scanf("%f%f",&a,&b);
    x = pow(a,2);
    y = pow(b,2);
    w = x + y;
    z = sqrt(w);
    printf("h^2 = %f\n",z);
    system("pause");
    return 0;
}
