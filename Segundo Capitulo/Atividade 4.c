#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float v,w,x,y,z;
    printf("Insira aqui quatro numeros e mostraremos sua media aritimetica: \n");
    scanf("%f%f%f%f", &w,&x,&y,&z);
    printf("Aqui está a media aritimetica: \n");
    v = (w + x + y + z)/4;
    printf("v = %f",v);
    system("pause");
    return 0;
}
