#include <stdio.h>

int main(int argc, char * argv[]){
argv[0]="main";
if (argc!=3)
	return 1;
else {
	int i;
	for (i=0;i<3;i++){
	printf("%s \n",argv[i]);
	}
}
return 0;
}
