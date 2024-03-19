#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	int n, j, i;
	char nombres [20][20], aux[20];
	
	do{
		
		printf ("Cuantos nombres: \n");
		scanf ("%d", &n);
		if (n<=0 || n>20){
			
			printf ("Rango 1-20 \n");
			
		}
		
	}while(n<=0 || n>20);
	
	printf ("ALM NOMBRES \n");
	printf ("======================= \n");
	
	for (i=0;i<n;i++){
		
		printf ("dame el nombre: \n");
		fflush (stdin);
		gets (nombres [i]);
		
	}
	
	//Metodo burbuja, ordenar los nombres de A-Z
	
	for (j=0;j<n-1;j++){
		
		for (i=0;i<n-1;i++){ //usar funciones de string.h porque las letras se portan raro
			
			if (strcmp (nombres[i], nombres[i+1])>0){
				
				strcpy(aux, nombres[i]);
				strcpy(nombres [i], nombres[i+1]);
				strcpy(nombres[i+1], aux);
				
			}
			
		}
		
	}
	
	//imprimir los numeros ordenados
	
	printf ("LOS NOMBRES ORDENADOS \n");
	printf ("====================== \n");
	
	for (i=0;i<n;i++){
		
		printf ("%S \n", nombres[i]);
		
	}
	
	return 0;
}
