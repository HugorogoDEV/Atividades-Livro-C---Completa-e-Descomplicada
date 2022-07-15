#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
printf("Insira a idade do nadador para saber sua categoria: \n");
scanf("%d",&x);
if((x>=5) && (x<=7)){
    printf("Infantil A. \n");
}
else
if((x>=8)&&(x<=10)){
    printf("Infantil B. \n");
}
else
if((x>=11)&&(x<=13)){
    printf("Juvenil A. \n");
}
else
if((x>=14)&&(x<=17)){
    printf("Juvenil B. \n");
}
else
if(x>=18){
    printf("Senior. \n");
}
system("pause");
return 0;
}
