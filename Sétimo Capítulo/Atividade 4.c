#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto{
float cordenada[2][2];
}ponto;
struct retangulo{
struct ponto ender;
}r;
int main(){
int a,b;
float area,diagonal,perimetro,altura,base;
for(a=0;a<2;a++){
    for(b=0;b<2;b++){
        printf("Valor da cordenada[%d][%d]:",a,b);
        scanf("%f",&r.ender.cordenada[a][b]);
    }
printf("Agora o eixoy:\n");
}
altura=r.ender.cordenada[0][0]-r.ender.cordenada[0][1];
base=r.ender.cordenada[1][0]-r.ender.cordenada[1][1];
area=altura*base;
diagonal=sqrt(pow(altura,2)+pow(base,2));
perimetro=2*(altura+base);
printf("\n Area,diagonal e perimetro respectivamente:\n%f,%f e %f\n",area,diagonal,perimetro);
system("pause");
return 0;
}
