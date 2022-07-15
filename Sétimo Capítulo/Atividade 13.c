#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n,o;
char m[50];
enum meses {janeiro,fevereiro,marco,abril,maio,junho,julho,agosto,setembro,outubro,novembro,dezembro}mes;
int main(){
strcpy(m,"\nInsira um valor de 0 a 11:\n");
for(n=0;n==0;){
    puts(m);
    scanf("%d",&o);
    if(o>=0&&o<=11){
        n=1;
        switch(o){
            case 0:printf("Janeiro");break;
            case 1:printf("Fevereiro");break;
            case 2:printf("Marco");break;
            case 3:printf("Abril");break;
            case 4:printf("Maio");break;
            case 5:printf("Junho");break;
            case 6:printf("Julho");break;
            case 7:printf("Agosto");break;
            case 8:printf("Setembro");break;
            case 9:printf("Outubro");break;
            case 10:printf("Novembro");break;
            case 11:printf("Dezembro");break;
        }
    }
}
printf(" e o mes correspondente.\n");
system("pause");
return 0;
}
