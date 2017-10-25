#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int a;
	int datos[a];
	int temp,valor;
	int alt=0; 
	srand(time(NULL));
	
	printf("Dame el Tamaño del arreglo:\n");
	scanf("%i",&a);
	
	
	printf("Los datos capturados fueron los siguientes: \n");
				for (int i=0;i<a;i++){
			
			alt=rand()%121;
		 	datos[i]=alt;
		 	printf("%i ",datos[i]);
					printf("Posicion %d: %d \n", i+1, datos[i]);
				}
				
	for (int i=0; i<4; i++) {
	  for (int j=i+1; j<5; j++){
	 	if (datos[i]>datos[j]){
				temp=datos[i];
		  		datos[i]=datos[j];
		   		datos[j]=temp;
			   }
		   }
		}
				printf("LOS NUMEROS ORDENADOS SON :\n");
				for(int i=0; i<5; i++){
					printf("%i ", datos[i]);
				}		
		printf("\n");
    	system("pause");
		system("cls");
	return 0;
}
