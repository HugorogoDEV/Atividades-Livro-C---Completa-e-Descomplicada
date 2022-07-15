#include <stdio.h>
#include <stdlib.h>
struct ponto{
int cordenada[2][3];
}z;
struct retangulo{
struct ponto ender;
}w;
int main(){
int a,b,c[6],i=0;
printf("Insira x e depois y:\n");
for(a=0;a<2;a++){
    for(b=0,c[i]=0;b<3;b++,i++){
        scanf("%f",&w.ender.cordenada[a][b]);
        c[i]=w.ender.cordenada[a][b];
    }
}
if(c[4]<=c[0] && c[4]>=c[2]){
    if(c[5]>=c[1] && c[5]<=c[3]){
        printf("\n O ponto esta dentro \n");
    }
}
else{
    printf("\n O ponto esta fora \n");
}
system("pause");
return 0;
}
