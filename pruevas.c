//Pruevas
#include<stdio.h>
main(){
	int vec[]={2,3,4,6,7};
	int i,pos;
	pos=0;
	for (i = 0; i < 5; ++i){
		if(vec[i]<1){
			printf("%i ",vec[i]);
			//printf("Es menor\n");
			pos=i;
		}
		//printf("%i ",vec[i]);
	}
	/*for (i = 0; i < 5; ++i)
	{
		printf("%i ",vec[i]);
	}*/
	//Correr
	for (i=4+1; i>pos; i--){
		vec[i]=vec[i-1]; 
	}
	printf("\n\n");
	vec[pos+1]=5;
	for (i = 0; i < 5; ++i)
	{
		printf("%i ",vec[i]);
	}
   
	printf("aaaaa%i\n",pos);
}
