#include <stdio.h>
#include <stdlib.h>
int hora,minuto,segundo,total;
int horario(int hora,int minuto,int segundo){
total=(hora*3600)+(minuto*60)+segundo;
}
void main(){
do{
    printf("Insira um valor entre 0 e 23:");
    scanf("%d",&hora);
}while(hora<0||hora>59);
do{
    printf("Insira um valor entre 0 e 59:");
    scanf("%d",&minuto);
}while(minuto<0||minuto>59);
do{
    printf("Insira um valor entre 0 e 59:");
    scanf("%d",&segundo);
}while(segundo<0||segundo>59);
horario(hora,minuto,segundo);
printf("\nTempo em segundos:%d\n",total);
system("pause");
}
