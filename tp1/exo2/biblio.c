#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void affiche(char *c){
  printf("%s",c);
};

int fact(int i){
  if (i == 0 || i == 1){
    return 1;
  }else{
    return i*fact(i-1);
  };
};

void date(){
  system("date");
};
