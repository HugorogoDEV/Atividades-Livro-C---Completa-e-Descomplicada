#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,c,d,e,f;
    char b;
    printf("Insira o dinheiro.\n");
    scanf("%f",&a);
    printf("Insira o estado.\n");
    scanf("%c",&b);
    switch(b) {
    case 'mg':{
        c = a * (107/100);
        printf("%f",c);} break;
    case 'sp':{
         d = a * (112/100);
         printf("%f",d);} break;
    case 'rj':{
         e = a * (115/100);
         printf("%f",e);} break;
    case 'ms':{
         f = a * (108/100);
         printf("%f",f);} break;
    default :{ printf("erro.\n");}
    }
    system("pause");
    return 0;
}
