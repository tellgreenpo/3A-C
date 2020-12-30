#include <stdio.h>
#include <stdlib.h>

typedef struct element{
  int info;
  struct element * suiv;
}element;

typedef struct liste{
  struct element *premier;
  struct element *dernier;
}liste;

void initialiser(liste * l){
  l->premier = NULL;
  l->dernier = NULL;
};
void ajouter(liste * l,int i,int vide){
  if vide{
    l->premier = malloc(sizeof(element));
    l->premier->info = i;
    l->premier->suiv = l->dernier;
    }
  else{
    l->dernier->suiv = malloc(sizeof(element));
    l->dernier->suiv->info = i;
    l->dernier->suiv->suiv = l->dernier;
    dernier = NULL;
  };
};
void supprimer(liste * l, int vide){
  if (vide!=0){ 
      aux = l->premier;
      l->premier=l->premier->suiv;
      free(aux);
  };
};
void afficher1(liste * l,int vide){
  if (vide!=0){
    printf("%i",l->premier->info);};
};
void afficher2(liste * l,int vide){
  if (vide !=0){
    printf("%i",l->dernier->info);
  };
};
int compte(liste * l){
  int i=0;
  while (l->dernier != l->premier){
    i++;
  };
  return i;
};
int vide(liste * l){
  int i=0;
  while (l->dernier != l->premier){
    i++;
  };
  if vide{
      return 1;
    }else{
    return 0;};
};

   

