#include <stdio.h>
#include <stdlib.h>
/* Leia em �ngulos e em graus e apresente-o convrtido em radianos.
 A formula de conver��o � R = G * pi / 180, sendo g o �ngulo em graus e R em radianos e pi = 3.141592. */
 int main()
 {
     float r,g,pi;
     printf("digite um angulo em graus: \n");
     scanf("%f",&g);
     pi = 3.141592;
     r = g * pi / 180;
     printf("O angulo convertido para radianos fica: \n%f\n", r);
     system("pause");
     return 0;
 }
