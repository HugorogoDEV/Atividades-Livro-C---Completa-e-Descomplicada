#include <stdio.h>
#include <stdlib.h>
float z;
float func(float a){
float d=1/a;
if(a>=2){
return d+func(a-1);
}
return 1;
}
void main(){
printf("Enesimo termo: ");
scanf("%f",&z);
printf("O numero: %f.\n",func(z));
system("pause");
}
