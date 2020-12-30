#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXNOTES 10

struct etudiant{
char nom[20];
int naissance;
int notes[MAXNOTES];
int nbr = 0;
}

int SaisirFiche(struct etudiant * p){
printf("Please enter the name with  antislash0 at the end\n");
scanf("%s",p->nom);
printf("Please enter his birthday date\n");
scanf("%i",p->naissance);
printf("Please enter the total number of grades\n");
scnaf("%i",p->nbr);
int i;
for (i = 0;i< (p->nbr);i++){
printf("Please enter the grade number %i \n",i);
scanf("%i",p->notes[i]);
}
return 0;
}

int AfficherFiche(struct etudiant *p){
printf("%s \n",p->nom);
printf("%i \n",p->naissance);
printf("Notes : ");
int i;
for (i=0;i< p->nbr;i++){
printf("%i ",p->notes[i]);
}
printf("\n");
return 0;
}

int main(){

return 0;
}
