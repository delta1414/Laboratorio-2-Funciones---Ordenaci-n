//Laboratorio #2 - Funciones - Ordenación
#include<stdio.h>
main(){
//prototipos de funciones
int capelements();//Funcion para captura elementos
void imprimir(int vec[],int cant);//Funcion para desplegar el vector
void correr(int vec[],int pos,int c);//Función que permite correr los elementos de un vector a la siguiente posición
int indice(int vec[],int valor,int cant);//Función que determina la posición del vector en la que debe colocarse el siguiente valor.
void inservalor(int vec[],int indece,int valor );//Función que permite insertar un valor en un vector.
int lleno(int cont, int cant);//Función que determina si el vector está lleno o no.

void llenarvector(int vec[],int cant);//Cargar el vector para poder ingresar el primer valor
//------------------------------------------------
//Declaracion de variables globales
int vec[100],i,n;//Vector-Variable de control en el ciclo-Almacena la cantidad de valores a ingresar
int a,sw,con,p;//Guarda el valor capturado por la funcion-variable de contador-almacena el indice

//------------------------------------------------

printf("Ingrese cantidad numeros a capturar\n");
scanf("%i",&n);//Se guarda la cantidad de elemtos a ingresar
llenarvector(vec,n);//Cargar el vector para poder ingresar el primer valor
//printf("%i\n",n);
//imprimir(vec,n);//Imprimi
con=0;
for (i = 0; i < n; ++i){
	if (lleno(con,n)==1){
		a=capelements();//invocacion de funcion para captura de elementos
		p=indice(vec,a,n);//Invocacion de la funcion para determinar la pocicion donde se ingresa el valor
		correr(vec,p,con);//Invocacion de funcion permite correr los elementos de un vector a la siguiente posición.
		inservalor(vec,p,a);//Invocacion de la función que permite insertar un valor en un vector.
		imprimir(vec,n);
		con++;
	}
}
//imprimir(vec,n);

}//Fin del Main

//------------------------------------------------

//Definiciones de funciones 
int capelements(){//Captura de elementos
	int x;//Variable local para guardar el valor capturado
	printf("Digite valor \n");
	scanf("%i",&x);//Se guarda el valor
	return(x);//Valor de retorno
}
//------------------------------------------------

/*void imprimir(int vec[],int cant){//Funcion para desplegar el vector
	int k;
	for(k=0;k<cant;k++){
		printf("-%d",vec[k]);
	}
	printf("\n");
	return;
}*/
void imprimir(int vec[],int cant){//Funcion para desplegar el vector
	int k;
	k=0;
	while(vec[k]!=(-1000)){
		printf("-%d",vec[k]);
		k++;
	}
	printf("\n");
	return;
}
//------------------------------------------------

void correr(int vec[],int pos,int c){//correr los elementos de un vector
	int i,aux;
	for (i=c+1; i>pos; i--){
		vec[i]=vec[i-1];  
	}
 
}//------------------------------------------------

int indice(int vec[],int valor,int cant){//Buscar el indice donde se guardara
	int i,c,sw;
	sw=0;
	for (i=0;i<cant && sw==0;i++){
		if (valor<vec[i]){
			sw=1;
			c=i;
		}else{
			if(vec[i]==-1000){
				sw=1;
				c=i;
			}
		}
	}
	//printf("%i\n",c);
	return(c);
}
//------------------------------------------------

void inservalor(int vec[],int indice,int valor ){//Función que permite insertar un valor en un vector	
	//Vector - indice donde se guardara	-Valor que se guardara	
	vec[indice]=valor;
	return;
}
//------------------------------------------------

int lleno(int cont,int cant){//Control del overflow
	int s;
	if(cont< cant){
		s=1;
		return(s);
	}else{
		s=0;
		return(s);
	}
	
}
//------------------------------------------------

void llenarvector(int vec[],int cant){//Cargar el vector para poder ingresar el primer valor
  //Vector--Cantidad de elementos
	int i;
	for (i = 0; i < cant; ++i){
		vec[i]=-1000;//Se agrega -1000 al vector en cada pocicion 
	}
	return;
}
//------------------------------------------------