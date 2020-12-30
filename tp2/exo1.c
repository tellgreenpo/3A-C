#include <stdio.h>
#include <stdlib.h>

int saisie(int lenline, int lencol, int mat[][lencol]){
  for(int i = 0;i<lenline;i++){
    for (int j = 0;j<lencol;j++){
      printf("Entre un element : ");
      scanf("%d",&mat[i][j]);
    };
  };
  return 0;
};

int saisiep(int lenline,int lencol, int * mat){
  for(int i =0;i<lenline*lencol;i++){
    printf("Entre un element : ");
    scanf("%d",mat);
    mat++;
  };
  return 0;
};


int affiche(int lenline, int lencol, int mat[][lencol]){
  for(int i = 0;i<lenline;i++){
    for (int j = 0;j<lencol;j++){
      printf("%d\n",mat[i][j]);
    };
  };
  return 0;
};

int main(){
  int lenline = 2;
  int lencol = 2;
  int mat[lenline][lencol];
  saisie(lenline,lencol,mat);
  affiche(lenline,lencol,mat);
  int * p = &mat[0][0];
  saisiep(lenline,lencol,p);
  affiche(lenline,lencol,p);
  return 0;
};
