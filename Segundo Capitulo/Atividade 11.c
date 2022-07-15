#include <stdio.h>
#include <stdlib.h>
/* Leia o valor do raio de um ciruclo. calcule e imprima a área do circulo correspondente.
 A área do circulo correspondente. A área do circulo é A = pi * x², sendo pi = 3.14 */
 int main()
 {
     float pi,x,y;
     printf("Insira aqui o vlaor de um raio e mostraremos a medida da area de seu circulo: \n");
     scanf("%f",&x);
     pi = 3.14;
     y = pi * x * x;
     printf("Esse e a area correspondente: %f",y);
     system("pause");
     return 0;
 }
