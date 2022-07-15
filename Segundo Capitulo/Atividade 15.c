#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia um número inteiro e mostra a multiplicação e a divisão desse número por dois,
 utilize os operadores de deslocamento de bits. */
 int main()
 {
     int x,y;
     printf("Digite um número e mostraremos ele multiplicado e dividido por 2.\n");
     scanf("%d",&x);
     y = x << 1;
     printf("Multiplicado por 2: %d\n",y);
     y = x >> 1;
     printf("dividido por 2: %d\n",y);
     system("pause");
     return 0;
 }
