#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int c=31,n1;
char b[50];
void mes(int a){
switch(a){
case 1: strcpy(b,"Janeiro"); break;
case 2: strcpy(b,"Fevereiro"); break;
case 3: strcpy(b,"Março"); break;
case 4: strcpy(b,"Abril"); break;
case 5: strcpy(b,"Maio"); break;
case 6: strcpy(b,"Junho"); break;
case 7: strcpy(b,"Julho"); break;
case 8: strcpy(b,"Agosto"); break;
case 9: strcpy(b,"Setembro"); break;
case 10: strcpy(b,"Outubro"); break;
case 11: strcpy(b,"Novembro"); break;
case 12: strcpy(b,"Dezembro"); break;
}}
void dias(int a){
switch(n1){
case 2:c-=3;break;
case 4:case 6:case 9:case 11:c-=1;break;}
}
int main(){
int a;
do{
    printf("Insira um numero de 1 a 12:\n");
    scanf("%d",&n1);
    if(n1>=1&&n1<=12){
        a=1;
        mes(n1);
        puts(b);
        dias(n1);
        printf("\n%d\n",c);
    }
}while(a==0);
system("pause");
}
