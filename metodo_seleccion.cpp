#include <iostream>


int main(int argc, char** argv) {
	int datos[5];
	int temp;
	
	for(int i=0;i<=4;i++){
		
			printf("Introduce el valor %d: \n", i+1);
			scanf("%d",&datos[i]);
	}
	printf("Los datos capturados fueron los siguientes: \n");
				for (int i=0;i<=4;i++){
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
