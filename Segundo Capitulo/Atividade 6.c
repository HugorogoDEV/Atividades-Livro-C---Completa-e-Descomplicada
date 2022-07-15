#include <stdio.h>
#include <stdlib.h>
/* Leia uma velocidade em km/h e apresente convertida em metros por segundo.
 A fórmula de conversão é M =k/36, sendo k a velocidade de km/h e M em m/s. */
 int main()
 {
     int x,y;
     printf("insira aqui uma velocidade em km/h e mostraremos ela em m/s: \n");
     scanf("%d", &x);
     y = x / 36;
     printf("o valor inserido convertido para m/s e: %d\n", y);
     system("pause");
     return 0;
 }
