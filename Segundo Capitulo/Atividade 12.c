#include <stdio.h>
#include <stdlib.h>
/* Leia a altura e o raio de um cilindro circular de raio que mostraremos o vlaor desse cilindro */
int main ()
{
    float x,y,z,pi;
    printf("Insira aqui uma emdida de altura e de raio que mostraremos um cilindro com elas. Altura, raio: \n");
    scanf("%f%f",&x,&y);
    pi = 3.14;
    z = pi * y * y * x;
    printf("O valor do volume do cilindro em L/cm cubicos e: %f\n",z);
    system("pause");
    return 0;
}
