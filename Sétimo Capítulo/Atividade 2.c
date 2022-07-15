#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct plano{
float eixox;
float eixoy;
float z;
};
int main(){
struct plano p;
printf("Insira a cordenada X do plano: ");
scanf("%f",&p.eixox);
printf("Insira a cordenada y do plano: ");
scanf("%f",&p.eixoy);
p.z=sqrt(pow(p.eixox,2)+pow(p.eixoy,2));
printf("O valor dele ate a origem e:\n%f\n",p.z);
fflush(stdin);
system("pause");
return 0;
}
