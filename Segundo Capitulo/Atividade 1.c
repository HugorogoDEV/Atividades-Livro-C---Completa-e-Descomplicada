#include <stdio.h>
#include <stdlib.h>
int main()
{
int z;
printf("insira o numero que voce deseja saber o antecessor e o successor: ");
scanf("%d", &z);
printf("O sucessor e: \n");
z = z + 1;
printf("z = %d\n",z);
printf("O antecessor e : \n");
z = z - 2;
printf("z = %d\n",z);
system("pause");
return 0;
}
