#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct plano{
float eixox;
float eixoy;
float z;
};
int main(){
struct plano p1,p2;
printf("--- Eixo x1: ");
scanf("%f",&p1.eixox);
printf("--- Eixo y1: ");
scanf("%f",&p1.eixoy);
printf("--- Eixo x2: ");
scanf("%f",&p2.eixox);
printf("--- Eixo y2: ");
scanf("%f",&p2.eixoy);
p1.z=sqrt(pow(p1.eixox-p2.eixox,2)+pow(p1.eixoy-p2.eixoy,2));
printf("--- Distancia: %f.\n",p1.z);
fflush(stdin);
system("pause");
return 0;
}
