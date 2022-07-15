#include <stdio.h>
#include <stdlib.h>
int main(){
int e;
float a,b,c,d=0;
for(a=1,b=1,e=1;e<=50;e++,a+=2,++b){
    c=a/b;
    d+=c;
    printf("%f.\n",d);
}
printf("s=%f.\n",d);
system("pause");
return 0;
}
