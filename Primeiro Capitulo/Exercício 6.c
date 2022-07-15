#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica */

main()
{
double num;
printf("digite um valor do tipo double: ");
scanf("%f", &num);
printf("O valor digitado foi: %e\n", num);
}
