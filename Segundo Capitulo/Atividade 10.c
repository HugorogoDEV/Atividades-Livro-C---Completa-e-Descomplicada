#include <stdio.h>
#include <stdlib.h>
/* Uma importância de R$780000.0 será dividido.*/
int main()
{
    float w,x,y,z,u;
    printf("Inserir aqui o valor que sera dividido entre tres pessoas sabendo que sera partido em 16, 32 e resto. \n");
    scanf("%f",&w);
    x = w * 46 / 100;
    y = w * 32 / 100;
    z = w - x - y;
    u = x + y + z;
    printf("O primeiro recebera:\n%f.\n O segundo:\n%f.\n O terceiro recebera: \n%f.\n",x,y,z);
    printf("Teste de prova %f",u);
    system("pause");
    return 0;
}
