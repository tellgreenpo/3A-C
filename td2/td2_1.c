#include <stdio.h>

int permut(int * p1, int * p2){
int aux = *p1;
*p1=*p2;
*p2=aux;
return 0;
}

int main(){
int var1=6;
int var2=9;
printf("%i%i \n",var1,var2);
permut(&var1,&var2);
printf("%i%i \n",var1,var2);
return 0;
}
