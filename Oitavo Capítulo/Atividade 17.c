#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a;
float b[];
float funcao(int a){
if(a>=1){
    b[a]=(pow(a,2)+1)/(a+3);
    return b[a]+funcao(a-1);}

else {return 0;}
}
void main(){
printf("Insira um valor:");
scanf("%d",&a);
printf("O resultado:%f\n",funcao(a));
system("pause");
}
