#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    float soma;
    int auxiliar =1 ;
    soma =0;
            while( auxiliar ) {
                  printf("Digite um n�mero qualquer ou 0 para terminar");
                  scanf("%d", &auxiliar);
                  printf("Usu�rio digitou %d \n",auxiliar);
                  soma=0;
                  if (auxiliar) {
                       for (i=1;i<=auxiliar;i++){
                           soma += (1.0/i);  // 1.0 ir� for�ar um c�lculo float
                        };
                       printf("O resultado da s�rie � %f \n\n",soma);
                    }
                 else {
                      printf("entrada terminada pelo usu�rio \n");
                  }
    };

}
