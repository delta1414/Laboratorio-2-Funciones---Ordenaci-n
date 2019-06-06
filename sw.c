#include <stdio.h>
int main(){
	int i,sw;
	sw=0;
	for (i = 0; i < 5&&sw==0; ++i){
		printf("bla bla bla \n");
		if (i==2)	{
			sw=1;
		}
	}
	return 0;
}