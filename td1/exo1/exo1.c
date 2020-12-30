#include <stdio.h>

int affiche (int *tableau,int len)
{
for (int i=0;i<len;i++){
printf("%d ",tableau[i]);
}
return 0;
}

int tri(int *tab,int len)
{
int aux;
int * pDebut = tab;
int * pFollow = tab;
int change = 1;
while (change==1){
change = 0;
pDebut = tab;
pFollow = pDebut+1;
for (int i =0;i<(len-1);i++){
if (*pDebut>*pFollow){
aux = *pFollow;
*pFollow = *pDebut;
*pDebut = aux;
change = 1;
}
pDebut = pDebut+1;
pFollow = pFollow +1;
}
}
return 0;
}

int main()
{
int tab[10] = {1,2,8,9,7,6,5,40,88,65};
int len = sizeof(tab)/sizeof(int);
tri(tab,len);
affiche(tab,len);
return 0;
}
