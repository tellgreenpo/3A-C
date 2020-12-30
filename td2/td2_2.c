#include <stdio.h>
#define TAILLE 10
#include <stdlib.h>

int main(void){
char * chaine;
int * tab;
chaine=malloc(sizeof(char)*11);
tab=malloc(sizeof(int)*10);
int i;
for (i=0;i<TAILLE-1;i++){
tab[i]=i+1;
chaine[i]=(char)(i+65);
}
chaine[TAILLE]=0;
return 0;
}
