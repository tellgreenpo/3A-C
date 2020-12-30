#include <stdio.h>

int  mult(int *a){
*a =(*a)+(*a);
return 0;
}

int comp(unsigned a,unsigned b){
if(a^b==512){
return 0;
}else{
return 1;
}
}

int main(){
unsigned a;
unsigned b;
unsigned c = (a>>16) | ((~b)<<16);
return 0;
}
