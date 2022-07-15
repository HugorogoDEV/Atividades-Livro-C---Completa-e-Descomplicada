#include <stdio.h>
#include <stdlib.h>
struct horas{
int hora;
int minuto;
int segundo;
}h[5];
int main(){
int a,g;
for(a=0;a<5;a++){
    printf("Hora:");
    scanf("%d",&h[a].hora);
    printf("Minuto:");
    scanf("%d",&h[a].minuto);
    printf("Segundo:");
    scanf("%d",&h[a].segundo);
    for(a=0;a<5;a++){
        g=h[a].hora;
        if(h[a].hora<h[a+1].hora){
            g=h[a+1].hora;
        }
    }
}
for(a=0;a<5;a++){
    if(g==h[a].hora){
        printf("A maior hora e:\n%d:%d:$d\n",h[a].hora,h[a].minuto,h[a].segundo);
    }
}
system("pause");
return 0;
}
