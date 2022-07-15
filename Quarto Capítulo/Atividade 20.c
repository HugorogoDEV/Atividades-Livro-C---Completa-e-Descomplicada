#include <stdio.h>
#include <stdlib.h>
int main(){
float a,b,c=1,d=0,n;
printf("Digite um valor inteiro e positivo:\n");
scanf("%f",&n);
if(n<1){
    printf("Numero nao valido.\n");
}
else{
    for(a=1;a<=n;a++){
        for(;a>0;a--){
            b=1/a;
            c*=b;
        }
    d+=c;
    }
    printf("O valor de E:%f.\n",d);
}
system("pause");
return 0;
}
